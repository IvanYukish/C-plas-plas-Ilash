//
// Created by yukish on 31.05.19.
//

#ifndef FOURTH_GRUP_BRACKET_H
#define FOURTH_GRUP_BRACKET_H
#include<iostream>
#include <string>

using namespace std;

class Bracket
{
    struct Node
    {
        char bracket;
        Node *pNext;
    };
    int count;
    Node *pHead;

public:
    Bracket()
    {
        pHead = nullptr;
        count = 0;
    }

    Bracket(char obj)
    {
        Node *pCur = new Node;
        pCur->bracket = obj;
    }

    bool addBracket(char obj)
    {

        Node *pNew = new Node;
        if (pNew)
        {
            if (count == 0)
            {
                pHead = nullptr;
            }
            pNew->bracket = obj;
            pNew->pNext = pHead;
            pHead = pNew;
            count++;
            return true;
        }
        return false;
    }

    bool checkBrakets(char example)
    {
        if (count == 0 || pHead->bracket != example)
        {
            return false;
        }
        Node *pDel = new Node;
        pDel = pHead;
        pHead = pHead->pNext;
        delete pDel;
        pDel = nullptr;
        count--;
        return true;
    }
};
#endif //FOURTH_GRUP_BRACKET_H
