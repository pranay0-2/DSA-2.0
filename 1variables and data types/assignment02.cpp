#include <iostream>

using namespace std;

int main(){

       float pencil , pen , eraser;
       cout<<"Enter the cost of pencils: "<<endl;
       cin>>pencil;
       cout<<"Enter the cost of pen: "<<endl;
       cin>>pen;
       cout<<"Enter the cost of eraser: "<<endl;
       cin>>eraser;

       float totalCost = (pencil + pen + eraser);
    
       float gst =  (totalCost * (18.0/100.0));
       float totalCostWithGst = (totalCost + gst);

       cout<<"Total cost after 18% gst is " <<totalCostWithGst<<endl;

       



return 0;

}