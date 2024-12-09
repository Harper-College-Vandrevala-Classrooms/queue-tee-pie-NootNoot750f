#include <iostream>
#include "Puppy.h"
#include "Kitty.h"
#include "PygmyMarmoset.h"
#include "QueueTees.h"


using namespace std;


int main() {
    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset bratMarmoset;

    QueueTees queue;

    cout << "Queue has this many Queuetees: " << queue.size() << endl;
    cout << "AYO WE GOT A NEW SHIPMENT OF QUEUETEES!?!?!" << endl;
    queue.enqueue(puppy);
    queue.enqueue(kitty);
    queue.enqueue(bratMarmoset);

    cout << "Queue Size: " << queue.size() << endl;

    Cutie* cutie;
    cout << "Time for them to walk the runway! " << endl;
    //Time for these Divas to leave the queue and walk the runway!!
    cutie = queue.dequeue();
    if(cutie) cout << cutie ->description() << endl;
    cutie = queue.dequeue();
    if(cutie) cout << cutie ->description() << endl;
    cutie = queue.dequeue();
    if(cutie) cout << cutie ->description() << endl;

    return 0;

}