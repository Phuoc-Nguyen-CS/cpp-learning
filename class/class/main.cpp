//
//  main.cpp
//  class
//
//  Created by Phuoc Nguyen on 3/18/22.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Process {
    
private:
    // Create the :
    int pid; //process id
    int rt;  //run time
    int at;  //arrive time
public:
    
    Process(int processId, int runTime, int arriveTime) {
        pid = processId;
        rt = runTime;
        at = arriveTime;
    }
    
    void setPid(int processId) {pid = processId;}
    
    int getPid() {return pid;}

    void setRt(int runTime) {rt = runTime;}
    
    int getRt() {return rt;}
    
    void setAt(int arriveTime) {at = arriveTime;}
    
    int getAt() {return at;}
};

int main() {

    Process *pid1 = new Process(1,2,3);
    Process pid2(3,4,5);
    
    cout << pid1->getRt();
    cout << pid2.getPid();
    
    
    
    
    
    return 0;
}
