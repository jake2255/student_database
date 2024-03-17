#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>

#define BLUE_TEXT "\x1b[36m"
#define WHITE_TEXT "\x1b[0m"
#define GREEN_TEXT "\x1b[32m"
#define RED_TEXT "\x1b[31m"

//struct that stores all the elements in each node
struct Node{
    Node* next;
    std::string s_name;
    std::string s_street;
    std::string s_city;
    std::string s_state;
    std::string s_zipcode;
    std::string s_dob;
    int s_id;

    Node(std::string name, std::string street, std::string city, std::string state, std::string zip, std::string dob, int id): 
        s_name(name), s_street(street), s_city(city), s_state(state), s_zipcode(zip), s_dob(dob), s_id(id){}
};

//class that implements the nodes into a linked list
class Linkedlist{
    private:
        Node* head;
        Node* tail;
    public:
        Linkedlist();
        ~Linkedlist();
        void InsertNode(std::string, std::string, std::string, std::string, std::string, std::string, int);
        void DeleteNode(std::string);
        bool SearchNode(std::string);
        void UpdateNode(std::string, std::string, std::string, std::string, std::string, std::string, std::string);
        void DisplayList();    
};

#endif
