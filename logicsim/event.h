#ifndef EVENT_H
#define EVENT_H
#include "wire.h"

struct Event
{
    uint64_t time;
    Wire* wire;
    char state;
};

typedef struct EventLess {
        //write the operator() required to make this a functor that compares Events by time
    public:
    bool operator()(Event* event_1, Event* event_2) 
    {
        return (event_1->time < event_2->time);
    }
} EventLess;

#endif
