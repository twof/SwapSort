#include <iostream>
#include <time.h>
using namespace std;

void arrayFiller(int SortableArray[]);
void swapSort(int SortableArray[]);

const int SIZE = 300000;

int main(){
    int SortableArray[SIZE];
    srand(time(0));
    arrayFiller(SortableArray);
    swapSort(SortableArray);
    /*for (int i=0; i<SIZE;i++) {
        cout << i << ": " << SortableArray[i] << endl;
    }*/
    return 0;
}

void arrayFiller(int SortableArray[]){
    for (int i=0; i<SIZE; i++){
        SortableArray[i] = rand()%1000000;
    }
}

void swapSort(int SortableArray[]){
    bool sorted = false;
    int temp;
    int counter = 0;
    
    while (sorted==false) {
        for (int i=0; i<SIZE/2; i++){ //Swapping mechanism
            if (SortableArray[i]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/4; i++){ //Swapping mechanism first half
            if (SortableArray[i]>SortableArray[SIZE/2-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE/2-(1+i)];
                SortableArray[SIZE/2-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/4; i++){ //Swapping mechanism second half
            if (SortableArray[SIZE/2-(1-i)]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[SIZE/2-(1-i)];
                SortableArray[SIZE/2-(1-i)] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/8; i++){ //Swapping mechanism first quarter
            if (SortableArray[i]>SortableArray[SIZE/4-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE/4-(1+i)];
                SortableArray[SIZE/4-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/8; i++){ //Swapping mechanism second quarter
            if (SortableArray[SIZE/4-(1-i)]>SortableArray[SIZE/2-(1+i)]){
                temp = SortableArray[SIZE/4-(1-i)];
                SortableArray[SIZE/4-(1-i)] = SortableArray[SIZE/2-(1+i)];
                SortableArray[SIZE/2-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/8; i++){ //Swapping mechanism third quarter
            if (SortableArray[SIZE/2-(1-i)]>SortableArray[SIZE/4-(1+i)+SIZE/2]){
                temp = SortableArray[SIZE/2-(1-i)];
                SortableArray[SIZE/2-(1-i)] = SortableArray[SIZE/4-(1+i)+SIZE/2];
                SortableArray[SIZE/4-(1+i)+SIZE/2]=temp;
            }
        }
        
        for (int i=0; i<SIZE/8; i++){ //Swapping mechanism fourth quarter
            if (SortableArray[SIZE/4-(1-i)+SIZE/2]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[SIZE/4-(1-i)+SIZE/2];
                SortableArray[SIZE/4-(1-i)+SIZE/2] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism first eighth
            if (SortableArray[i]>SortableArray[SIZE/8-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE/8-(1+i)];
                SortableArray[SIZE/8-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism second eighth
            if (SortableArray[SIZE/8-(1-i)]>SortableArray[SIZE/8-(1+i)+SIZE/8]){
                temp = SortableArray[SIZE/8-(1-i)];
                SortableArray[SIZE/8-(1-i)] = SortableArray[SIZE/8-(1+i)+SIZE/8];
                SortableArray[SIZE/8-(1+i)+SIZE/8]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism third eighth
            if (SortableArray[SIZE/8-(1-i)+SIZE/8]>SortableArray[SIZE/8-(1+i)+SIZE*2/8]){
                temp = SortableArray[SIZE/8-(1-i)+SIZE/8];
                SortableArray[SIZE/8-(1-i)+SIZE/8] = SortableArray[SIZE/8-(1+i)+SIZE*2/8];
                SortableArray[SIZE/8-(1+i)+SIZE*2/8]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism fourth eighth
            if (SortableArray[SIZE/8-(1-i)+SIZE*2/8]>SortableArray[SIZE/8-(1+i)+SIZE*3/8]){
                temp = SortableArray[SIZE/8-(1-i)+SIZE*2/8];
                SortableArray[SIZE/8-(1-i)+SIZE*2/8] = SortableArray[SIZE/8-(1+i)+SIZE*3/8];
                SortableArray[SIZE/8-(1+i)+SIZE*3/8]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism fifth eighth
            if (SortableArray[SIZE/8-(1-i)+SIZE*3/8]>SortableArray[SIZE/8-(1+i)+SIZE*4/8]){
                temp = SortableArray[SIZE/8-(1-i)+SIZE*3/8];
                SortableArray[SIZE/8-(1-i)+SIZE*3/8] = SortableArray[SIZE/8-(1+i)+SIZE*4/8];
                SortableArray[SIZE/8-(1+i)+SIZE*4/8]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism sixth eighth
            if (SortableArray[SIZE/8-(1-i)+SIZE*4/8]>SortableArray[SIZE/8-(1+i)+SIZE*5/8]){
                temp = SortableArray[SIZE/8-(1-i)+SIZE*4/8];
                SortableArray[SIZE/8-(1-i)+SIZE*4/8] = SortableArray[SIZE/8-(1+i)+SIZE*5/8];
                SortableArray[SIZE/8-(1+i)+SIZE*5/8]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism seventh eighth
            if (SortableArray[SIZE/8-(1-i)+SIZE*5/8]>SortableArray[SIZE/8-(1+i)+SIZE*6/8]){
                temp = SortableArray[SIZE/8-(1-i)+SIZE*5/8];
                SortableArray[SIZE/8-(1-i)+SIZE*5/8] = SortableArray[SIZE/8-(1+i)+SIZE*6/8];
                SortableArray[SIZE/8-(1+i)+SIZE*6/8]=temp;
            }
        }
        
        for (int i=0; i<SIZE/16; i++){ //Swapping mechanism eighth eighth
            if (SortableArray[SIZE/8-(1-i)+SIZE*6/8]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[SIZE/8-(1-i)+SIZE*6/8];
                SortableArray[SIZE/8-(1-i)+SIZE*6/8] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism first sixteenth
            if (SortableArray[i]>SortableArray[SIZE/16-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE/16-(1+i)];
                SortableArray[SIZE/16-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism second sixteenth
            if (SortableArray[SIZE/16-(1-i)]>SortableArray[SIZE/16-(1+i)+SIZE/16]){
                temp = SortableArray[SIZE/16-(1-i)];
                SortableArray[SIZE/16-(1-i)] = SortableArray[SIZE/16-(1+i)+SIZE/16];
                SortableArray[SIZE/16-(1+i)+SIZE/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism third sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE/16]>SortableArray[SIZE/16-(1+i)+SIZE*2/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE/16];
                SortableArray[SIZE/16-(1-i)+SIZE/16] = SortableArray[SIZE/16-(1+i)+SIZE*2/16];
                SortableArray[SIZE/16-(1+i)+SIZE*2/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism fourth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*2/16]>SortableArray[SIZE/16-(1+i)+SIZE*3/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*2/16];
                SortableArray[SIZE/16-(1-i)+SIZE*2/16] = SortableArray[SIZE/16-(1+i)+SIZE*3/16];
                SortableArray[SIZE/16-(1+i)+SIZE*3/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism fifth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*3/16]>SortableArray[SIZE/16-(1+i)+SIZE*4/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*3/16];
                SortableArray[SIZE/16-(1-i)+SIZE*3/16] = SortableArray[SIZE/16-(1+i)+SIZE*4/16];
                SortableArray[SIZE/16-(1+i)+SIZE*4/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism sixth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*4/16]>SortableArray[SIZE/16-(1+i)+SIZE*5/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*4/16];
                SortableArray[SIZE/16-(1-i)+SIZE*4/16] = SortableArray[SIZE/16-(1+i)+SIZE*5/16];
                SortableArray[SIZE/16-(1+i)+SIZE*5/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism seventh sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*5/16]>SortableArray[SIZE/16-(1+i)+SIZE*6/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*5/16];
                SortableArray[SIZE/16-(1-i)+SIZE*5/16] = SortableArray[SIZE/16-(1+i)+SIZE*6/16];
                SortableArray[SIZE/16-(1+i)+SIZE*6/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism eighth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*6/16]>SortableArray[SIZE/16-(1+i)+SIZE*7/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*6/16];
                SortableArray[SIZE/16-(1-i)+SIZE*6/16] = SortableArray[SIZE/16-(1+i)+SIZE*7/16];
                SortableArray[SIZE/16-(1+i)+SIZE*7/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism ninth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*7/16]>SortableArray[SIZE/16-(1+i)+SIZE*8/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*7/16];
                SortableArray[SIZE/16-(1-i)+SIZE*7/16] = SortableArray[SIZE/16-(1+i)+SIZE*8/16];
                SortableArray[SIZE/16-(1+i)+SIZE*8/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism tenth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*8/16]>SortableArray[SIZE/16-(1+i)+SIZE*9/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*8/16];
                SortableArray[SIZE/16-(1-i)+SIZE*8/16] = SortableArray[SIZE/16-(1+i)+SIZE*9/16];
                SortableArray[SIZE/16-(1+i)+SIZE*9/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism eleventh sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*9/16]>SortableArray[SIZE/16-(1+i)+SIZE*10/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*9/16];
                SortableArray[SIZE/16-(1-i)+SIZE*9/16] = SortableArray[SIZE/16-(1+i)+SIZE*10/16];
                SortableArray[SIZE/16-(1+i)+SIZE*10/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism twelfth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*10/16]>SortableArray[SIZE/16-(1+i)+SIZE*11/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*10/16];
                SortableArray[SIZE/16-(1-i)+SIZE*10/16] = SortableArray[SIZE/16-(1+i)+SIZE*11/16];
                SortableArray[SIZE/16-(1+i)+SIZE*11/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism thirteenth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*11/16]>SortableArray[SIZE/16-(1+i)+SIZE*12/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*11/16];
                SortableArray[SIZE/16-(1-i)+SIZE*11/16] = SortableArray[SIZE/16-(1+i)+SIZE*12/16];
                SortableArray[SIZE/16-(1+i)+SIZE*12/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism fourteenth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*12/16]>SortableArray[SIZE/16-(1+i)+SIZE*13/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*12/16];
                SortableArray[SIZE/16-(1-i)+SIZE*12/16] = SortableArray[SIZE/16-(1+i)+SIZE*13/16];
                SortableArray[SIZE/16-(1+i)+SIZE*13/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism fifteenth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*13/16]>SortableArray[SIZE/16-(1+i)+SIZE*14/16]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*13/16];
                SortableArray[SIZE/16-(1-i)+SIZE*13/16] = SortableArray[SIZE/16-(1+i)+SIZE*14/16];
                SortableArray[SIZE/16-(1+i)+SIZE*14/16]=temp;
            }
        }
        
        for (int i=0; i<SIZE/32; i++){ //Swapping mechanism sixteenth sixteenth
            if (SortableArray[SIZE/16-(1-i)+SIZE*14/16]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[SIZE/16-(1-i)+SIZE*14/16];
                SortableArray[SIZE/16-(1-i)+SIZE*14/16] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism first thirtysecond
            if (SortableArray[i]>SortableArray[SIZE/32-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE/32-(1+i)];
                SortableArray[SIZE/32-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism second thirtysecond
            if (SortableArray[SIZE/32-(1-i)]>SortableArray[SIZE/32-(1+i)+SIZE/32]){
                temp = SortableArray[SIZE/32-(1-i)];
                SortableArray[SIZE/32-(1-i)] = SortableArray[SIZE/32-(1+i)+SIZE/32];
                SortableArray[SIZE/32-(1+i)+SIZE/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism third thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE/32]>SortableArray[SIZE/32-(1+i)+SIZE*2/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE/32];
                SortableArray[SIZE/32-(1-i)+SIZE/32] = SortableArray[SIZE/32-(1+i)+SIZE*2/32];
                SortableArray[SIZE/32-(1+i)+SIZE*2/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism fourth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*2/32]>SortableArray[SIZE/32-(1+i)+SIZE*3/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*2/32];
                SortableArray[SIZE/32-(1-i)+SIZE*2/32] = SortableArray[SIZE/32-(1+i)+SIZE*3/32];
                SortableArray[SIZE/32-(1+i)+SIZE*3/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism fifth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*3/32]>SortableArray[SIZE/32-(1+i)+SIZE*4/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*3/32];
                SortableArray[SIZE/32-(1-i)+SIZE*3/32] = SortableArray[SIZE/32-(1+i)+SIZE*4/32];
                SortableArray[SIZE/32-(1+i)+SIZE*4/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism sixth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*4/32]>SortableArray[SIZE/32-(1+i)+SIZE*5/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*4/32];
                SortableArray[SIZE/32-(1-i)+SIZE*4/32] = SortableArray[SIZE/32-(1+i)+SIZE*5/32];
                SortableArray[SIZE/32-(1+i)+SIZE*5/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism seventh thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*5/32]>SortableArray[SIZE/32-(1+i)+SIZE*6/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*5/32];
                SortableArray[SIZE/32-(1-i)+SIZE*5/32] = SortableArray[SIZE/32-(1+i)+SIZE*6/32];
                SortableArray[SIZE/32-(1+i)+SIZE*6/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism eighth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*6/32]>SortableArray[SIZE/32-(1+i)+SIZE*7/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*6/32];
                SortableArray[SIZE/32-(1-i)+SIZE*6/32] = SortableArray[SIZE/32-(1+i)+SIZE*7/32];
                SortableArray[SIZE/32-(1+i)+SIZE*7/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism ninth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*7/32]>SortableArray[SIZE/32-(1+i)+SIZE*8/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*7/32];
                SortableArray[SIZE/32-(1-i)+SIZE*7/32] = SortableArray[SIZE/32-(1+i)+SIZE*8/32];
                SortableArray[SIZE/32-(1+i)+SIZE*8/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism tenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*8/32]>SortableArray[SIZE/32-(1+i)+SIZE*9/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*8/32];
                SortableArray[SIZE/32-(1-i)+SIZE*8/32] = SortableArray[SIZE/32-(1+i)+SIZE*9/32];
                SortableArray[SIZE/32-(1+i)+SIZE*9/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism eleventh thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*9/32]>SortableArray[SIZE/32-(1+i)+SIZE*10/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*9/32];
                SortableArray[SIZE/32-(1-i)+SIZE*9/32] = SortableArray[SIZE/32-(1+i)+SIZE*10/32];
                SortableArray[SIZE/32-(1+i)+SIZE*10/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twelfth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*10/32]>SortableArray[SIZE/32-(1+i)+SIZE*11/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*10/32];
                SortableArray[SIZE/32-(1-i)+SIZE*10/32] = SortableArray[SIZE/32-(1+i)+SIZE*11/32];
                SortableArray[SIZE/32-(1+i)+SIZE*11/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism thirteenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*11/32]>SortableArray[SIZE/32-(1+i)+SIZE*12/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*11/32];
                SortableArray[SIZE/32-(1-i)+SIZE*11/32] = SortableArray[SIZE/32-(1+i)+SIZE*12/32];
                SortableArray[SIZE/32-(1+i)+SIZE*12/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism fourteenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*12/32]>SortableArray[SIZE/32-(1+i)+SIZE*13/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*12/32];
                SortableArray[SIZE/32-(1-i)+SIZE*12/32] = SortableArray[SIZE/32-(1+i)+SIZE*13/32];
                SortableArray[SIZE/32-(1+i)+SIZE*13/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism fifteenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*13/32]>SortableArray[SIZE/32-(1+i)+SIZE*14/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*13/32];
                SortableArray[SIZE/32-(1-i)+SIZE*13/32] = SortableArray[SIZE/32-(1+i)+SIZE*14/32];
                SortableArray[SIZE/32-(1+i)+SIZE*14/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism sixteenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*14/32]>SortableArray[SIZE/32-(1+i)+SIZE*15/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*14/32];
                SortableArray[SIZE/32-(1-i)+SIZE*14/32] = SortableArray[SIZE/32-(1+i)+SIZE*15/32];
                SortableArray[SIZE/32-(1+i)+SIZE*15/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism seventeenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*15/32]>SortableArray[SIZE/32-(1+i)+SIZE*16/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*15/32];
                SortableArray[SIZE/32-(1-i)+SIZE*15/32] = SortableArray[SIZE/32-(1+i)+SIZE*16/32];
                SortableArray[SIZE/32-(1+i)+SIZE*16/32]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism eightteenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*16/32]>SortableArray[SIZE/32-(1+i)+SIZE*17/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*16/32];
                SortableArray[SIZE/32-(1-i)+SIZE*16/32] = SortableArray[SIZE/32-(1+i)+SIZE*17/32];
                SortableArray[SIZE/32-(1+i)+SIZE*17/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism nineteenth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*17/32]>SortableArray[SIZE/32-(1+i)+SIZE*18/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*17/32];
                SortableArray[SIZE/32-(1-i)+SIZE*17/32] = SortableArray[SIZE/32-(1+i)+SIZE*18/32];
                SortableArray[SIZE/32-(1+i)+SIZE*18/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentieth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*18/32]>SortableArray[SIZE/32-(1+i)+SIZE*19/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*18/32];
                SortableArray[SIZE/32-(1-i)+SIZE*18/32] = SortableArray[SIZE/32-(1+i)+SIZE*19/32];
                SortableArray[SIZE/32-(1+i)+SIZE*19/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentyfirst thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*19/32]>SortableArray[SIZE/32-(1+i)+SIZE*20/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*19/32];
                SortableArray[SIZE/32-(1-i)+SIZE*19/32] = SortableArray[SIZE/32-(1+i)+SIZE*20/32];
                SortableArray[SIZE/32-(1+i)+SIZE*20/32]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentysecond thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*20/32]>SortableArray[SIZE/32-(1+i)+SIZE*21/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*20/32];
                SortableArray[SIZE/32-(1-i)+SIZE*20/32] = SortableArray[SIZE/32-(1+i)+SIZE*21/32];
                SortableArray[SIZE/32-(1+i)+SIZE*21/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentythird thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*21/32]>SortableArray[SIZE/32-(1+i)+SIZE*22/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*21/32];
                SortableArray[SIZE/32-(1-i)+SIZE*21/32] = SortableArray[SIZE/32-(1+i)+SIZE*22/32];
                SortableArray[SIZE/32-(1+i)+SIZE*22/32]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentyfourth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*22/32]>SortableArray[SIZE/32-(1+i)+SIZE*23/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*22/32];
                SortableArray[SIZE/32-(1-i)+SIZE*22/32] = SortableArray[SIZE/32-(1+i)+SIZE*23/32];
                SortableArray[SIZE/32-(1+i)+SIZE*23/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentyfifth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*23/32]>SortableArray[SIZE/32-(1+i)+SIZE*24/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*23/32];
                SortableArray[SIZE/32-(1-i)+SIZE*23/32] = SortableArray[SIZE/32-(1+i)+SIZE*24/32];
                SortableArray[SIZE/32-(1+i)+SIZE*24/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentysixth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*24/32]>SortableArray[SIZE/32-(1+i)+SIZE*25/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*24/32];
                SortableArray[SIZE/32-(1-i)+SIZE*24/32] = SortableArray[SIZE/32-(1+i)+SIZE*25/32];
                SortableArray[SIZE/32-(1+i)+SIZE*25/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentyseventh thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*25/32]>SortableArray[SIZE/32-(1+i)+SIZE*26/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*25/32];
                SortableArray[SIZE/32-(1-i)+SIZE*25/32] = SortableArray[SIZE/32-(1+i)+SIZE*26/32];
                SortableArray[SIZE/32-(1+i)+SIZE*26/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentyeighth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*26/32]>SortableArray[SIZE/32-(1+i)+SIZE*27/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*26/32];
                SortableArray[SIZE/32-(1-i)+SIZE*26/32] = SortableArray[SIZE/32-(1+i)+SIZE*27/32];
                SortableArray[SIZE/32-(1+i)+SIZE*27/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism twentynineth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*27/32]>SortableArray[SIZE/32-(1+i)+SIZE*28/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*27/32];
                SortableArray[SIZE/32-(1-i)+SIZE*27/32] = SortableArray[SIZE/32-(1+i)+SIZE*28/32];
                SortableArray[SIZE/32-(1+i)+SIZE*28/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism thirtieth thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*28/32]>SortableArray[SIZE/32-(1+i)+SIZE*29/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*28/32];
                SortableArray[SIZE/32-(1-i)+SIZE*28/32] = SortableArray[SIZE/32-(1+i)+SIZE*29/32];
                SortableArray[SIZE/32-(1+i)+SIZE*29/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism thirtyfirst thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*29/32]>SortableArray[SIZE/32-(1+i)+SIZE*30/32]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*29/32];
                SortableArray[SIZE/32-(1-i)+SIZE*29/32] = SortableArray[SIZE/32-(1+i)+SIZE*30/32];
                SortableArray[SIZE/32-(1+i)+SIZE*30/32]=temp;
            }
        }
        
        for (int i=0; i<SIZE/64; i++){ //Swapping mechanism thirtysecond thirtysecond
            if (SortableArray[SIZE/32-(1-i)+SIZE*30/32]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[SIZE/32-(1-i)+SIZE*30/32];
                SortableArray[SIZE/32-(1-i)+SIZE*30/32] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        /*for (int i=0; i<SIZE;i++) {
            cout << i << ": " << SortableArray[i] << endl;
        }*/
        
        for (int i=0; i<SIZE-1; i++){ //Bubble sort
            if (SortableArray[i]>SortableArray[i+1]) {
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[i+1];
                SortableArray[i+1]=temp;
            }else{
                counter++;
            }
        }
        if (counter == SIZE-1) {
            sorted=true;
        }else{
            counter=0;
        }
    }
}