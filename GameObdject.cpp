//
// Created by ann on 08.04.18.
//
#include <vector>
#include <iostream>
#include <SFML/Graphics/Sprite.hpp>

class ComponentType {};
//Следующие три класса должны быть отдно типа ComponentType, как реализовать это не понимаю пока, наследование
// не подходит, в интернете то, что написано для паттерна Декоратор тоже не подходит или я неправильно его понимаю

class RigidBody {
public:
    float mass, volicity_x, velocity_y, x, y, acceleration_x, acceleration_y;
};

class Collider {
public:
    bool isCollision() {};
    void resolveCollision() {};
};

class Render {

public:
    sf::Sprite sprite;
    void draw() {};
};




class GameObdgject {
public:
    std::vector<ComponentType*> Components;
    void addComponent(ComponentType* component) {
        Components.push_back(component);
        };
};