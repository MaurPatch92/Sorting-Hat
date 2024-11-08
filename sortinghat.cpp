#include <iostream>

//to compile: g++ -g yourfile.cpp -o yourfile.exe
//to run: .\yourfile.exe


int main() {

  //Four houses, all alike in dignity, in fair Hogwarts, where we lay our scene...
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;


  //answers storage
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "The Sorting Hat Quiz!\n\n";

  //Begin quiz with choices (user must input number)
  std::cout << "When I'm dead, I want people to remember me as:\n";
  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";

  std::cin >> answer1;

  if (answer1 == 1) {
    hufflepuff ++;
  } else if (answer1 == 2) {
    slytherin ++;
  } else if (answer1 = 3) {
    ravenclaw ++;
  } else if (answer1 = 4) {
    gryffindor ++;
  } else {
    std::cout << "Invalid input";
  }

std::cout << "2) Dawn or dusk?\n";
  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";

  std::cin >> answer2;

  if (answer2 == 1) {
    gryffindor ++;
    ravenclaw ++;
  } else if (answer2 == 2) {
    slytherin ++;
    hufflepuff ++;
  } else {
    std::cout << "Invalid input";
  }

  std::cout << "Which instrument most pleases your ear?\n";
  std::cout << "1) Violin\n";
  std::cout << "2) Trumpet\n";
  std::cout << "3) Piano\n";
  std::cout << "4) Drum\n";

  std::cin >> answer3;

  if (answer3 == 1) {
    slytherin ++;
  } else if (answer3 == 2) {
    hufflepuff ++;
  } else if (answer3 = 3) {
    ravenclaw ++;
  } else if (answer3 = 4) {
    gryffindor ++;
  } else {
    std::cout << "Invalid input";
  }

  std::cout << "Which road tempts you the most?\n";
  std::cout << "1) The wide, sunny grassy lane\n";
  std::cout << "2) The narrow, dark lantern-lit alley\n";
  std::cout << "3) The twisting, leaf-strewn path through the woods\n";
  std::cout << "4) The cobbled street lined with ancient buildings\n";

  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff ++;
  } else if (answer4 == 2) {
    slytherin ++;
  } else if (answer4 = 3) {
    gryffindor ++;
  } else if (answer4 = 4) {
    ravenclaw ++;
  } else {
    std::cout << "Invalid input";
  }

  int max = 0;
  std:: string house;

if (gryffindor > max) {
  
  max = gryffindor;
  house = "Gryffindor";
  
}

if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";
  
}

if (ravenclaw > max) {
  
  max = ravenclaw;
  house = "Ravenclaw";
  
}

if (slytherin > max) {
  
  max = slytherin;
  house = "Slytherin";
  
}

std::cout << house << "!\n";

std::cout << "Press Enter to exit...";
std::cin.ignore(); // Ignore the leftover newline from the previous input
std::cin.get();    // Wait for the user to press Enter



}
