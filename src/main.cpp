/*
University Amerike
Author: Sebastian Arias
Practice: 21
Date 08/04/25
Description: Create a programm and declare 3 diferent classes. All the atributte needs to be public, dont ask the user data.
*/

#include <iostream>

using namespace std;

class User
{
    public:
    string firstName;
    string lastName;
    string middleName;

    void showNames()
    {
        cout << "First name: " << firstName << "\n";
        cout << "Last name: " << lastName << "\n";
        cout << "Middle name: " << middleName << "\n";
    }

    void resetNames()
    {
        firstName = "" ;
        lastName = "" ;
        middleName = "" ;
    }
};

class Food
{
    public:
    string breakfast;
    string meal;
    string dinner;

    void showFood()
    {
        cout << "Breakfast: " << breakfast << "\n";
        cout << "Meal:" << meal << "\n";
        cout << "Dinner: " << dinner << "\n";
    }

    void resetFood()
    {
        breakfast = "";
        meal = "";
        dinner = "";
    }
};

class videogames
{
    public:
    string firstVideoGame;
    string secondVideoGame;
    string thirdVideoGame;

    void showVideoGame()
    {
        cout << "First videogame: " << firstVideoGame << "\n";
        cout << "Second videogame: " << secondVideoGame << "\n";
        cout << "Third videogame: " << thirdVideoGame << "\n";
    }

    void resetVideoGame()
    {
        firstVideoGame = "";
        secondVideoGame = "";
        thirdVideoGame = "";
    }
};

int main()
{
    User a;
    User b;
    Food food1;
    Food food2;
    videogames game1;
    videogames game2; 

    a.showNames();
    b.showNames();

    a.firstName = "Sebastian";
    b.firstName = "Alexis";
    a.lastName = "Arias";
    b.lastName = "Martinez";
    a.middleName = "Javier";
    b.middleName = "Alejandro";
   
    a.showNames();
    b.showNames();

    a.resetNames();
    b.resetNames();

    a.showNames();
    b.showNames();

    food1.showFood();
    food2.showFood();

    food1.breakfast = "Chilaquiles";
    food2.breakfast = "Waffles";
    food1.meal = "Torta Ahogadas";
    food2.meal = "Hamburger";
    food1.dinner = "Enchiladas";
    food2.dinner = "Hot dogs";

    food1.showFood();
    food2.showFood();

    food1.resetFood();
    food2.resetFood();
    
    food1.showFood();
    food2.showFood();

    game1.showVideoGame();
    game2.showVideoGame();

    game1.firstVideoGame = "Dark souls 3";
    game2.firstVideoGame = "Elden ring";
    game1.secondVideoGame = "Mario kart 8";
    game2.secondVideoGame = "Mario kart World";
    game1.thirdVideoGame = "Donkey kong country returns";
    game2.thirdVideoGame = "Donkey kong Bananza";

    game1.showVideoGame();
    game2.showVideoGame();

    game1.resetVideoGame();
    game2.resetVideoGame();
    
    game1.showVideoGame();
    game2.showVideoGame();

    return 0;
};

