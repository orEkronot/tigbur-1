#pragma once

// TODO: Create Color enum outside the class that includes:
// - Must have RED color
// - Add other colors as desired
enum Color {
    RED = 1,
    GREEN = 2,
    PURPLE = 3,
    PINK = 4,
    WHITE
};


class CarColor {

private:
    // TODO: Add single private field of type Color
    Color _color;

public:

    // TODO: Implement constructor
    CarColor(const Color& color);

    CarColor();

    // TODO: Implement getter for the color
    Color getColor() const;

    void setColor(const Color& color);
 
    // TODO: Implement operator== for comparing colors
    bool operator==(const CarColor& other) const;

};