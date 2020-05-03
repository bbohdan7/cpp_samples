#include <iostream>
#include <list>
#include <iomanip>

class Packing;

class Item {
public:
    virtual Packing *packing() = 0;

    virtual char *name() = 0;

    virtual float price() = 0;
};

class Packing {
public:
    virtual char *pack() = 0;
};

class Box : public Packing {
public:
    char *pack() override {
        return "Box";
    }
};

class Wrapper : public Packing {
public:
    char *pack() override {
        return "Wrapper";
    }
};

class Bottle : public Packing {
public:
    char *pack() override {
        return "Bottle";
    }
};

class Cup : public Packing {
public:
    char *pack() override {
        return "Paper Cup";
    }
};

class ColdDrink : public Item {
public:
    Packing *packing() override {
        return new Bottle();
    }
};

class Pizza : public Item {
public:
    Packing *packing() override {
        return new Box();
    }
};

class Burger : public Item {
public:
    Packing *packing() override {
        return new Wrapper();
    }
};

class Coffee : public Item {
public:
    Packing *packing() override {
        return new Cup();
    }
};

class Barbecue : public Pizza {
public:
    char *name() override {
        return "Pizza Barbecue";
    }

    float price() override {
        return 30.f;
    }
};

class Margherita : public Pizza {
public:
    char *name() override {
        return "Pizza Margherita";
    }

    float price() override {
        return 35.f;
    }
};

class ChickenBurger : public Burger {
public:
    char *name() override {
        return "Chicken Burger";
    }

    float price() override {
        return 25.f;
    }
};

class CheeseBurger : public Burger {
public:
    char *name() override {
        return "Cheese Burger";
    }

    float price() override {
        return 30.f;
    }
};

class Americano : public Coffee {
public:
    char *name() override {
        return "Americano 300ml";
    }

    float price() override {
        return 10.f;
    }
};

class Espresso : public Coffee {
public:
    char *name() override {
        return "Esspresso 30ml";
    }

    float price() override {
        return 10.f;
    }
};

class Pepsi : public ColdDrink {
public:
private:
    char *name() override {
        return "Pepsi";
    }

    float price() override {
        return 15.f;
    }
};

class CocaCola : public ColdDrink {
public:
private:
    char *name() override {
        return "Coca-Cola";
    }

    float price() override {
        return 15.f;
    }
};

class Order {
    enum Action {
        PRINT, COST, DELETE
    };
public:
    Order() {
        std::cout << std::setw(40) << std::setfill('*') << std::cout.fill() << " NEW ORDER " << std::setw(49)
                  << std::cout.fill() << std::endl;
        std::cout << std::setw(100) << std::setfill('*') << std::cout.fill() << std::endl;
        items = new std::list<Item *>();
        cost = 0.f;
    }

    ~Order() {
        std::cout << "Thank You for Your visit, see You soon =)" << std::endl;
        listIteration(Action::DELETE);
        delete this->items;
    };

    void addItem(Item *item) {
        items->push_front(item);
    }

    void showItems() {
        this->listIteration(Action::PRINT);
        this->listIteration(Action::COST);
    }

private:
    std::list<Item *> *items;
    float cost;

    void listIteration(Action action) {
        for (std::list<Item *>::iterator iterator = items->begin(); iterator != items->end(); iterator++) {
            switch (action) {
                case Action::COST: {
                    cost += (*iterator)->price();

                    auto last = items->end();
                    last--;

                    if (iterator == last) {
                        std::cout << "Your checkout will be " << this->cost << "$" << std::endl;
                        std::cout << std::setw(100) << std::setfill('*') << std::cout.fill() << std::endl;
                    }
                    break;
                }
                case Action::PRINT: {
                    std::cout << "Your order: " << (*iterator)->name() << ", packed in "
                              << (*iterator)->packing()->pack()
                              << ", cost: " << (*iterator)->price() << "$" << std::endl;
                    break;
                }
                case Action::DELETE: {
                    this->items->pop_back();
                    break;
                }
                default:
                    break;
            }
        }
    };
};

class MenuBuilder {
public:
    static Order *makeMargheritaMenu() {
        auto *order = new Order();
        order->addItem(new Margherita());
        order->addItem(new Pepsi());
        order->addItem(new Espresso());
        return order;
    }

    static Order *makeBurgerMenu() {
        auto *order = new Order();
        order->addItem(new CheeseBurger());
        order->addItem(new ChickenBurger());
        order->addItem(new Espresso());
        order->addItem(new CocaCola());

        return order;
    }

    static Order *makeBarbecueMenu() {
        auto *order = new Order();
        order->addItem(new Barbecue());
        order->addItem(new Americano());
        order->addItem(new Pepsi());

        return order;
    }
};

int main(int argv, char *args[]) {
    auto *order = MenuBuilder::makeMargheritaMenu();
    order->showItems();

    order = MenuBuilder::makeBurgerMenu();
    order->showItems();

    delete order;
}