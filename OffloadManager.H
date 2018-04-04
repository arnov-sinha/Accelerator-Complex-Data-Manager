#ifndef _OFFLOADMANAGER_H
#define _OFFLOADMANAGER_H
#include <vector>
#include <ctime>
#include <map>

#if defined(_OPENACC)
#include <accel.h>
#endif

/*
* OffloadTimer
* Tracks execution time with an arbitrary series of ticks/tocks
*/
class OffloadTimer
{
    public:
        OffloadTimer();
       ~OffloadTimer();

    public:
        int     getNbTicks    () { return _nbTicks;   }
        double  getTotalTime  () { return _totalTime; }

    public:
        void    reset ();
        void    tick  ();
        void    tock  ();

    private:
        double  _totalTime;
        int     _nbTicks;
        clock_t _tick;
        clock_t _tock;
};

#endif //end of _OFFLOADMANAGER_H
