#include <iostream>
using namespace std;

float getTailsSize(float height, float weight){
    float sqfit = height * weight / 144;
    return sqfit;
}

void getCartonAndPcs(float size,float sellSqfit, int percaton, int &carton, int &pcs){
    int totalpcs = sellSqfit / size;
    carton = totalpcs / static_cast<int>(percaton);
    pcs = totalpcs % static_cast<int>(percaton);
}

int main(){
    float height, weight;
    cout<<"Ceramic Tails Size Height & Weight : ";
    cin>>height>>weight;
    float size = getTailsSize(height, weight);
    cout<<"Your Ceramic Taile Size: "<<size<<" Sqfit"<<endl;
    
    float cartonsize , sellSqfit;
    
    cout<<"Enter Your Sell sqfit: ";
    cin>>sellSqfit;
    cout<<"Enter Carton Size: ";
    cin>>cartonsize;
    
    int carton, pcs;
    
    getCartonAndPcs(size, sellSqfit ,cartonsize, carton,pcs);
    cout << "Total : " << carton << " cartons "<<pcs<< " pieces";
    return 0;
}
