// Joshua Fashe
// Prof. Gooch - COSC-1436
// Created on 11//2023
// Boxing Assignment 17
// "Muay Thai Kickboxing Weight Class Identifier"
// 

#include <iostream>
using namespace std;

int main () {
  int weight;

  cout << "Enter your weight in pounds:  ";
  cin >> weight;
  
  switch(weight) {
    case 0 ... 112:
      cout << "You are a Flyweight.";
      break;
    case 113 ... 115:
      cout << "You are a Super Flyweight";
      break;
    case 116 ... 118:
      cout << "You are a Bantamweight";
      break;
    case 119 ... 122:
      cout << "You are a Super Bantamweight";
      break;
    case 123 ... 126:
      cout << "You are a Featherweight";
      break;
    case 127 ... 130:
      cout << "You are a Super Featherweight";
      break;
    case 131 ... 135:
      cout << "You are a Lightweight";
      break;
    case 136 ... 140:
      cout << "You are a Super Lightweight";
      break;
    case 141 ... 147:
      cout << "You are a Welterweight";
      break;
    case 148 ... 154:
      cout << "You are a Super Welterweight";
      break;
    case 155 ... 160:
      cout << "You are a Middleweight";
      break;
    case 161 ... 167:
      cout << "You are a Super Middleweight";
      break;
    case 168 ... 175:
      cout << "You are a Light Heavyweight";
      break;
    case 176 ... 183:
      cout << "You are a Super Light Heavyweight";
      break;
    case 184 ... 190:
      cout << "You are a Cruiserweight";
      break;
    case 191 ... 220:
      cout << "You are a Heavyweight";
      break;
    case 221 ... 800:
      cout << "You are a Super Heavyweight";
      break;
    default:
      cout << "Invalid weight entered. Please try again.";
  }

  return 0;

}