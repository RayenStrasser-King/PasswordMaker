
#include <iostream>
#include "dstack.h"
using namespace std;

Dstack::Dstack()
{

        m_top = NULL;
        m_size = 0;
}

Dstack::~Dstack()
{
        while (m_top)
        {
                Node *tmp = m_top;
                m_top = m_top-> m_next;
                delete tmp;
        }
}

void Dstack::push (double value)
{
        m_top = new Node (value, m_top);
        m_size++;
}

bool Dstack::pop (double &value)
{
        if (m_top == NULL)
        return false;
        value = m_top->m_value;
        Node *tmp = m_top;
        m_top = m_top->m_next;
        delete tmp;
        --m_size;
        return true;
}

bool Dstack::empty()
{
        if (m_top == NULL)
                return true;
        else
                return false:
}

