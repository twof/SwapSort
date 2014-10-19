#include <iostream>
#include <time.h>
using namespace std;

void arrayFiller(int SortableArray[]);
void swapSort(int SortableArray[]);

const int SIZE = 1000000; //size of the array being sorted. Change this to change the size.

int main(){
    int SortableArray[SIZE]; //array to be sorted
    srand(time(0)); //seed rand for filling the array
    arrayFiller(SortableArray); //fill the array
    swapSort(SortableArray); //sort the array
    /*for (int i=0; i<SIZE;i++) {  //uncomment this for loop to print the sorted array. Commented out to test for time
        cout << i << ": " << SortableArray[i] << endl;
    }*/
    return 0; //end
}

void arrayFiller(int SortableArray[]){
    for (int i=0; i<SIZE; i++){
        SortableArray[i] = rand()%10000000; //fill the array with numbers between 1 and 10000000
    }
}

void swapSort(int SortableArray[]){
    bool sorted = false;
    int temp;
    int counter = 0;
    
    while (sorted==false) {
        
        /*this is the swapping block. See readme for the logic*/
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
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism first sixtyfourth
            if (SortableArray[i]>SortableArray[SIZE/64-(1+i)]){
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[SIZE/64-(1+i)];
                SortableArray[SIZE/64-(1+i)]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism second sixtyfourth
            if (SortableArray[SIZE/64-(1-i)]>SortableArray[SIZE/64-(1+i)+SIZE/64]){
                temp = SortableArray[SIZE/64-(1-i)];
                SortableArray[SIZE/64-(1-i)] = SortableArray[SIZE/64-(1+i)+SIZE/64];
                SortableArray[SIZE/64-(1+i)+SIZE/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism third sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE/64]>SortableArray[SIZE/64-(1+i)+SIZE*2/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE/64];
                SortableArray[SIZE/64-(1-i)+SIZE/64] = SortableArray[SIZE/64-(1+i)+SIZE*2/64];
                SortableArray[SIZE/64-(1+i)+SIZE*2/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fourth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*2/64]>SortableArray[SIZE/64-(1+i)+SIZE*3/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*2/64];
                SortableArray[SIZE/64-(1-i)+SIZE*2/64] = SortableArray[SIZE/64-(1+i)+SIZE*3/64];
                SortableArray[SIZE/64-(1+i)+SIZE*3/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fifth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*3/64]>SortableArray[SIZE/64-(1+i)+SIZE*4/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*3/64];
                SortableArray[SIZE/64-(1-i)+SIZE*3/64] = SortableArray[SIZE/64-(1+i)+SIZE*4/64];
                SortableArray[SIZE/64-(1+i)+SIZE*4/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism sixth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*4/64]>SortableArray[SIZE/64-(1+i)+SIZE*5/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*4/64];
                SortableArray[SIZE/64-(1-i)+SIZE*4/64] = SortableArray[SIZE/64-(1+i)+SIZE*5/64];
                SortableArray[SIZE/64-(1+i)+SIZE*5/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism seventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*5/64]>SortableArray[SIZE/64-(1+i)+SIZE*6/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*5/64];
                SortableArray[SIZE/64-(1-i)+SIZE*5/64] = SortableArray[SIZE/64-(1+i)+SIZE*6/64];
                SortableArray[SIZE/64-(1+i)+SIZE*6/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism eighth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*6/64]>SortableArray[SIZE/64-(1+i)+SIZE*7/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*6/64];
                SortableArray[SIZE/64-(1-i)+SIZE*6/64] = SortableArray[SIZE/64-(1+i)+SIZE*7/64];
                SortableArray[SIZE/64-(1+i)+SIZE*7/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism ninth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*7/64]>SortableArray[SIZE/64-(1+i)+SIZE*8/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*7/64];
                SortableArray[SIZE/64-(1-i)+SIZE*7/64] = SortableArray[SIZE/64-(1+i)+SIZE*8/64];
                SortableArray[SIZE/64-(1+i)+SIZE*8/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism tenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*8/64]>SortableArray[SIZE/64-(1+i)+SIZE*9/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*8/64];
                SortableArray[SIZE/64-(1-i)+SIZE*8/64] = SortableArray[SIZE/64-(1+i)+SIZE*9/64];
                SortableArray[SIZE/64-(1+i)+SIZE*9/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism eleventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*9/64]>SortableArray[SIZE/64-(1+i)+SIZE*10/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*9/64];
                SortableArray[SIZE/64-(1-i)+SIZE*9/64] = SortableArray[SIZE/64-(1+i)+SIZE*10/64];
                SortableArray[SIZE/64-(1+i)+SIZE*10/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twelfth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*10/64]>SortableArray[SIZE/64-(1+i)+SIZE*11/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*10/64];
                SortableArray[SIZE/64-(1-i)+SIZE*10/64] = SortableArray[SIZE/64-(1+i)+SIZE*11/64];
                SortableArray[SIZE/64-(1+i)+SIZE*11/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*11/64]>SortableArray[SIZE/64-(1+i)+SIZE*12/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*11/64];
                SortableArray[SIZE/64-(1-i)+SIZE*11/64] = SortableArray[SIZE/64-(1+i)+SIZE*12/64];
                SortableArray[SIZE/64-(1+i)+SIZE*12/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fourteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*12/64]>SortableArray[SIZE/64-(1+i)+SIZE*13/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*12/64];
                SortableArray[SIZE/64-(1-i)+SIZE*12/64] = SortableArray[SIZE/64-(1+i)+SIZE*13/64];
                SortableArray[SIZE/64-(1+i)+SIZE*13/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fifteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*13/64]>SortableArray[SIZE/64-(1+i)+SIZE*14/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*13/64];
                SortableArray[SIZE/64-(1-i)+SIZE*13/64] = SortableArray[SIZE/64-(1+i)+SIZE*14/64];
                SortableArray[SIZE/64-(1+i)+SIZE*14/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism sixteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*14/64]>SortableArray[SIZE/64-(1+i)+SIZE*15/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*14/64];
                SortableArray[SIZE/64-(1-i)+SIZE*14/64] = SortableArray[SIZE/64-(1+i)+SIZE*15/64];
                SortableArray[SIZE/64-(1+i)+SIZE*15/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism seventeenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*15/64]>SortableArray[SIZE/64-(1+i)+SIZE*16/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*15/64];
                SortableArray[SIZE/64-(1-i)+SIZE*15/64] = SortableArray[SIZE/64-(1+i)+SIZE*16/64];
                SortableArray[SIZE/64-(1+i)+SIZE*16/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism eightteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*16/64]>SortableArray[SIZE/64-(1+i)+SIZE*17/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*16/64];
                SortableArray[SIZE/64-(1-i)+SIZE*16/64] = SortableArray[SIZE/64-(1+i)+SIZE*17/64];
                SortableArray[SIZE/64-(1+i)+SIZE*17/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism nineteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*17/64]>SortableArray[SIZE/64-(1+i)+SIZE*18/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*17/64];
                SortableArray[SIZE/64-(1-i)+SIZE*17/64] = SortableArray[SIZE/64-(1+i)+SIZE*18/64];
                SortableArray[SIZE/64-(1+i)+SIZE*18/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentieth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*18/64]>SortableArray[SIZE/64-(1+i)+SIZE*19/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*18/64];
                SortableArray[SIZE/64-(1-i)+SIZE*18/64] = SortableArray[SIZE/64-(1+i)+SIZE*19/64];
                SortableArray[SIZE/64-(1+i)+SIZE*19/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyfirst sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*19/64]>SortableArray[SIZE/64-(1+i)+SIZE*20/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*19/64];
                SortableArray[SIZE/64-(1-i)+SIZE*19/64] = SortableArray[SIZE/64-(1+i)+SIZE*20/64];
                SortableArray[SIZE/64-(1+i)+SIZE*20/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentysecond sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*20/64]>SortableArray[SIZE/64-(1+i)+SIZE*21/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*20/64];
                SortableArray[SIZE/64-(1-i)+SIZE*20/64] = SortableArray[SIZE/64-(1+i)+SIZE*21/64];
                SortableArray[SIZE/64-(1+i)+SIZE*21/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentythird sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*21/64]>SortableArray[SIZE/64-(1+i)+SIZE*22/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*21/64];
                SortableArray[SIZE/64-(1-i)+SIZE*21/64] = SortableArray[SIZE/64-(1+i)+SIZE*22/64];
                SortableArray[SIZE/64-(1+i)+SIZE*22/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyfourth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*22/64]>SortableArray[SIZE/64-(1+i)+SIZE*23/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*22/64];
                SortableArray[SIZE/64-(1-i)+SIZE*22/64] = SortableArray[SIZE/64-(1+i)+SIZE*23/64];
                SortableArray[SIZE/64-(1+i)+SIZE*23/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyfifth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*23/64]>SortableArray[SIZE/64-(1+i)+SIZE*24/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*23/64];
                SortableArray[SIZE/64-(1-i)+SIZE*23/64] = SortableArray[SIZE/64-(1+i)+SIZE*24/64];
                SortableArray[SIZE/64-(1+i)+SIZE*24/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentysixth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*24/64]>SortableArray[SIZE/64-(1+i)+SIZE*25/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*24/64];
                SortableArray[SIZE/64-(1-i)+SIZE*24/64] = SortableArray[SIZE/64-(1+i)+SIZE*25/64];
                SortableArray[SIZE/64-(1+i)+SIZE*25/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyseventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*25/64]>SortableArray[SIZE/64-(1+i)+SIZE*26/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*25/64];
                SortableArray[SIZE/64-(1-i)+SIZE*25/64] = SortableArray[SIZE/64-(1+i)+SIZE*26/64];
                SortableArray[SIZE/64-(1+i)+SIZE*26/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyeighth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*26/64]>SortableArray[SIZE/64-(1+i)+SIZE*27/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*26/64];
                SortableArray[SIZE/64-(1-i)+SIZE*26/64] = SortableArray[SIZE/64-(1+i)+SIZE*27/64];
                SortableArray[SIZE/64-(1+i)+SIZE*27/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyninth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*27/64]>SortableArray[SIZE/64-(1+i)+SIZE*28/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*27/64];
                SortableArray[SIZE/64-(1-i)+SIZE*27/64] = SortableArray[SIZE/64-(1+i)+SIZE*28/64];
                SortableArray[SIZE/64-(1+i)+SIZE*28/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirtieth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*28/64]>SortableArray[SIZE/64-(1+i)+SIZE*29/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*28/64];
                SortableArray[SIZE/64-(1-i)+SIZE*28/64] = SortableArray[SIZE/64-(1+i)+SIZE*29/64];
                SortableArray[SIZE/64-(1+i)+SIZE*29/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirtyfirst sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*29/64]>SortableArray[SIZE/64-(1+i)+SIZE*30/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*29/64];
                SortableArray[SIZE/64-(1-i)+SIZE*29/64] = SortableArray[SIZE/64-(1+i)+SIZE*30/64];
                SortableArray[SIZE/64-(1+i)+SIZE*30/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyseventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*30/64]>SortableArray[SIZE/64-(1+i)+SIZE*31/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*30/64];
                SortableArray[SIZE/64-(1-i)+SIZE*30/64] = SortableArray[SIZE/64-(1+i)+SIZE*31/64];
                SortableArray[SIZE/64-(1+i)+SIZE*31/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyeighth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*31/64]>SortableArray[SIZE/64-(1+i)+SIZE*32/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*31/64];
                SortableArray[SIZE/64-(1-i)+SIZE*31/64] = SortableArray[SIZE/64-(1+i)+SIZE*32/64];
                SortableArray[SIZE/64-(1+i)+SIZE*32/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyninth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*32/64]>SortableArray[SIZE/64-(1+i)+SIZE*33/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*32/64];
                SortableArray[SIZE/64-(1-i)+SIZE*32/64] = SortableArray[SIZE/64-(1+i)+SIZE*33/64];
                SortableArray[SIZE/64-(1+i)+SIZE*33/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirtieth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*33/64]>SortableArray[SIZE/64-(1+i)+SIZE*34/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*33/64];
                SortableArray[SIZE/64-(1-i)+SIZE*33/64] = SortableArray[SIZE/64-(1+i)+SIZE*34/64];
                SortableArray[SIZE/64-(1+i)+SIZE*34/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirtyfirst sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*34/64]>SortableArray[SIZE/64-(1+i)+SIZE*35/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*34/64];
                SortableArray[SIZE/64-(1-i)+SIZE*34/64] = SortableArray[SIZE/64-(1+i)+SIZE*35/64];
                SortableArray[SIZE/64-(1+i)+SIZE*35/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fourth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*35/64]>SortableArray[SIZE/64-(1+i)+SIZE*36/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*35/64];
                SortableArray[SIZE/64-(1-i)+SIZE*35/64] = SortableArray[SIZE/64-(1+i)+SIZE*36/64];
                SortableArray[SIZE/64-(1+i)+SIZE*36/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fifth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*36/64]>SortableArray[SIZE/64-(1+i)+SIZE*37/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*36/64];
                SortableArray[SIZE/64-(1-i)+SIZE*36/64] = SortableArray[SIZE/64-(1+i)+SIZE*37/64];
                SortableArray[SIZE/64-(1+i)+SIZE*37/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism sixth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*37/64]>SortableArray[SIZE/64-(1+i)+SIZE*38/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*37/64];
                SortableArray[SIZE/64-(1-i)+SIZE*37/64] = SortableArray[SIZE/64-(1+i)+SIZE*38/64];
                SortableArray[SIZE/64-(1+i)+SIZE*38/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism seventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*38/64]>SortableArray[SIZE/64-(1+i)+SIZE*39/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*38/64];
                SortableArray[SIZE/64-(1-i)+SIZE*38/64] = SortableArray[SIZE/64-(1+i)+SIZE*39/64];
                SortableArray[SIZE/64-(1+i)+SIZE*39/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism ninth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*39/64]>SortableArray[SIZE/64-(1+i)+SIZE*40/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*39/64];
                SortableArray[SIZE/64-(1-i)+SIZE*39/64] = SortableArray[SIZE/64-(1+i)+SIZE*40/64];
                SortableArray[SIZE/64-(1+i)+SIZE*40/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism tenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*40/64]>SortableArray[SIZE/64-(1+i)+SIZE*41/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*40/64];
                SortableArray[SIZE/64-(1-i)+SIZE*40/64] = SortableArray[SIZE/64-(1+i)+SIZE*41/64];
                SortableArray[SIZE/64-(1+i)+SIZE*41/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism eleventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*41/64]>SortableArray[SIZE/64-(1+i)+SIZE*42/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*41/64];
                SortableArray[SIZE/64-(1-i)+SIZE*41/64] = SortableArray[SIZE/64-(1+i)+SIZE*42/64];
                SortableArray[SIZE/64-(1+i)+SIZE*42/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twelfth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*42/64]>SortableArray[SIZE/64-(1+i)+SIZE*43/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*42/64];
                SortableArray[SIZE/64-(1-i)+SIZE*42/64] = SortableArray[SIZE/64-(1+i)+SIZE*43/64];
                SortableArray[SIZE/64-(1+i)+SIZE*43/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*43/64]>SortableArray[SIZE/64-(1+i)+SIZE*44/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*43/64];
                SortableArray[SIZE/64-(1-i)+SIZE*43/64] = SortableArray[SIZE/64-(1+i)+SIZE*44/64];
                SortableArray[SIZE/64-(1+i)+SIZE*44/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fourteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*44/64]>SortableArray[SIZE/64-(1+i)+SIZE*45/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*44/64];
                SortableArray[SIZE/64-(1-i)+SIZE*44/64] = SortableArray[SIZE/64-(1+i)+SIZE*45/64];
                SortableArray[SIZE/64-(1+i)+SIZE*45/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism fifteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*45/64]>SortableArray[SIZE/64-(1+i)+SIZE*46/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*45/64];
                SortableArray[SIZE/64-(1-i)+SIZE*45/64] = SortableArray[SIZE/64-(1+i)+SIZE*46/64];
                SortableArray[SIZE/64-(1+i)+SIZE*46/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism sixteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*46/64]>SortableArray[SIZE/64-(1+i)+SIZE*47/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*46/64];
                SortableArray[SIZE/64-(1-i)+SIZE*46/64] = SortableArray[SIZE/64-(1+i)+SIZE*47/64];
                SortableArray[SIZE/64-(1+i)+SIZE*47/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism seventeenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*47/64]>SortableArray[SIZE/64-(1+i)+SIZE*48/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*47/64];
                SortableArray[SIZE/64-(1-i)+SIZE*47/64] = SortableArray[SIZE/64-(1+i)+SIZE*48/64];
                SortableArray[SIZE/64-(1+i)+SIZE*48/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism eightteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*48/64]>SortableArray[SIZE/64-(1+i)+SIZE*49/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*48/64];
                SortableArray[SIZE/64-(1-i)+SIZE*48/64] = SortableArray[SIZE/64-(1+i)+SIZE*49/64];
                SortableArray[SIZE/64-(1+i)+SIZE*49/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism nineteenth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*49/64]>SortableArray[SIZE/64-(1+i)+SIZE*50/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*49/64];
                SortableArray[SIZE/64-(1-i)+SIZE*49/64] = SortableArray[SIZE/64-(1+i)+SIZE*50/64];
                SortableArray[SIZE/64-(1+i)+SIZE*50/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentieth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*50/64]>SortableArray[SIZE/64-(1+i)+SIZE*51/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*50/64];
                SortableArray[SIZE/64-(1-i)+SIZE*50/64] = SortableArray[SIZE/64-(1+i)+SIZE*51/64];
                SortableArray[SIZE/64-(1+i)+SIZE*51/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyfirst sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*51/64]>SortableArray[SIZE/64-(1+i)+SIZE*52/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*51/64];
                SortableArray[SIZE/64-(1-i)+SIZE*51/64] = SortableArray[SIZE/64-(1+i)+SIZE*52/64];
                SortableArray[SIZE/64-(1+i)+SIZE*52/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentysecond sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*52/64]>SortableArray[SIZE/64-(1+i)+SIZE*53/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*52/64];
                SortableArray[SIZE/64-(1-i)+SIZE*52/64] = SortableArray[SIZE/64-(1+i)+SIZE*53/64];
                SortableArray[SIZE/64-(1+i)+SIZE*53/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentythird sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*53/64]>SortableArray[SIZE/64-(1+i)+SIZE*54/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*53/64];
                SortableArray[SIZE/64-(1-i)+SIZE*53/64] = SortableArray[SIZE/64-(1+i)+SIZE*54/64];
                SortableArray[SIZE/64-(1+i)+SIZE*54/64]=temp;
            }
        }
        
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyfourth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*54/64]>SortableArray[SIZE/64-(1+i)+SIZE*55/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*54/64];
                SortableArray[SIZE/64-(1-i)+SIZE*54/64] = SortableArray[SIZE/64-(1+i)+SIZE*55/64];
                SortableArray[SIZE/64-(1+i)+SIZE*55/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyfifth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*55/64]>SortableArray[SIZE/64-(1+i)+SIZE*56/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*55/64];
                SortableArray[SIZE/64-(1-i)+SIZE*55/64] = SortableArray[SIZE/64-(1+i)+SIZE*56/64];
                SortableArray[SIZE/64-(1+i)+SIZE*56/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentysixth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*56/64]>SortableArray[SIZE/64-(1+i)+SIZE*57/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*56/64];
                SortableArray[SIZE/64-(1-i)+SIZE*56/64] = SortableArray[SIZE/64-(1+i)+SIZE*57/64];
                SortableArray[SIZE/64-(1+i)+SIZE*57/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyseventh sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*57/64]>SortableArray[SIZE/64-(1+i)+SIZE*58/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*57/64];
                SortableArray[SIZE/64-(1-i)+SIZE*57/64] = SortableArray[SIZE/64-(1+i)+SIZE*58/64];
                SortableArray[SIZE/64-(1+i)+SIZE*58/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyeighth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*58/64]>SortableArray[SIZE/64-(1+i)+SIZE*59/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*58/64];
                SortableArray[SIZE/64-(1-i)+SIZE*58/64] = SortableArray[SIZE/64-(1+i)+SIZE*59/64];
                SortableArray[SIZE/64-(1+i)+SIZE*59/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism twentyninth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*59/64]>SortableArray[SIZE/64-(1+i)+SIZE*60/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*59/64];
                SortableArray[SIZE/64-(1-i)+SIZE*59/64] = SortableArray[SIZE/64-(1+i)+SIZE*60/64];
                SortableArray[SIZE/64-(1+i)+SIZE*60/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirtieth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*60/64]>SortableArray[SIZE/64-(1+i)+SIZE*61/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*60/64];
                SortableArray[SIZE/64-(1-i)+SIZE*60/64] = SortableArray[SIZE/64-(1+i)+SIZE*61/64];
                SortableArray[SIZE/64-(1+i)+SIZE*61/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism thirtyfirst sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*61/64]>SortableArray[SIZE/64-(1+i)+SIZE*62/64]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*61/64];
                SortableArray[SIZE/64-(1-i)+SIZE*61/64] = SortableArray[SIZE/64-(1+i)+SIZE*62/64];
                SortableArray[SIZE/64-(1+i)+SIZE*62/64]=temp;
            }
        }
        
        for (int i=0; i<SIZE/128; i++){ //Swapping mechanism sixtyfourth sixtyfourth
            if (SortableArray[SIZE/64-(1-i)+SIZE*62/64]>SortableArray[SIZE-(1+i)]){
                temp = SortableArray[SIZE/64-(1-i)+SIZE*62/64];
                SortableArray[SIZE/64-(1-i)+SIZE*62/64] = SortableArray[SIZE-(1+i)];
                SortableArray[SIZE-(1+i)]=temp;
            }
        }
        
        /*This is the bubble sort*/
        for (int i=0; i<SIZE-1; i++){
            if (SortableArray[i]>SortableArray[i+1]) {
                temp = SortableArray[i];
                SortableArray[i] = SortableArray[i+1];
                SortableArray[i+1]=temp;
            }else{
                counter++; //every time a set is in order, add one to counter
            }
        }
        if (counter == SIZE-1) { //if everything is in order, sorted is true
            sorted=true;
        }else{
            counter=0; //otherwise, return it to 0
        }
    }
}