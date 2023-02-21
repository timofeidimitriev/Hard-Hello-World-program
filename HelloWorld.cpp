#include <iostream>

class Printer {
public:
    virtual void print() const = 0;
};

class Message {
public:
    virtual std::string get_message() const = 0;
};

class HelloWorldMessage: public Message {
public:
    std::string get_message() const override {return "Hello, World";}
};

class MessagePrinter: public Printer {
public:
    MessagePrinter(const Message& message): message_(message) {}
    void print() const override { std::cout << message_.get_message() << std::endl; }
private:
    const Message& message_;
};

int main() {
    HelloWorldMessage hello_world_message;
    MessagePrinter printer(hello_world_message);
    printer.print();
    return 0;
}