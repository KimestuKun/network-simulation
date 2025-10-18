#pragma once
#include <string>

class Node {
public:
    Node(const std::string& name);
    void start();
    void stop();
    std::string getName() const;

private:
    std::string name;
};
