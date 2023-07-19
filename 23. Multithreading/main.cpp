#include <iostream>
#include <thread>

using std::cout;
using std::endl;
using std::thread;
using std::string;

thread build_thread(int &&intervalSeconds, int &&iterations, string &&message) {
    thread task([&]() -> void {
        using namespace std::chrono_literals;

        for (int i = 0; i < iterations; i++){
            cout << message << " count: " << i << endl;
            std::this_thread::sleep_for(std::chrono::seconds(intervalSeconds));
        }
    });

    return task;
}

int main() {

    auto task1 = build_thread(3, 20, "first thread");
    auto task2 = build_thread(2, 25, "second thread");
    auto task3 = build_thread(1, 30, "third thread");

    task1.join();
    task2.join();
    task3.join();

    return 0;
}