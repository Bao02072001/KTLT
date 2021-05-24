#include<iostream>
#include<string.h>
#include<string>
#include<fstream>
using namespace std;
#define MAX 50
struct Point{
    float x;
    float y;
};
struct Tree{
    Point local;
    int type;
};
struct Plantation{
    Tree trees[100];
    int length;
};
/*void docfile(ifstream&fIN,Plantation p[]){
    while(!fIN.eof()){
        int n;
        fIN>>n;
        for(int i=0;i<n;i++){
            fIN>>p[i].local.x>>" ">>p[i].local.y>>" ">>p[i].type;
        }
    }
}*/
int countTrees(Plantation p,int type){
    int count=0;
    for(int i=0;i<p.length;i++){
        if(p.trees[i].type==type){
            count++;
        }
    }
    return count;
}
int countCoffeeTrees(Plantation p){
    return countTrees(p,0);
}

int countTeaTrees(Plantation p){
    return countTrees(p,1);
}
Point findUpperLeft(Plantation p){
    Point diem_a;
    diem_a.x=p.trees[0].local.x;
    diem_a.y=p.trees[0].local.y;
    for(int i=0;i<p.length;i++){
        if(p.trees[i].local.x<diem_a.x&&p.trees[i].local.y>diem_a.y){
            diem_a.x=p.trees[i].local.x;
            diem_a.y=p.trees[i].local.y;
        }
    }
    return diem_a;
}
Point findLowerRight(Plantation p){
    Point diem_b;
    diem_b.x=p.trees[0].local.x;
    diem_b.y=p.trees[0].local.y;
    for(int i=0;i<p.length;i++){
        if(p.trees[i].local.x>diem_b.x&&p.trees[i].local.y<diem_b.y){
            diem_b.x=p.trees[i].local.x;
            diem_b.y=p.trees[i].local.y;
        }
    }
    return diem_b;
}
float calcFenceLength(Plantation p,int type){
    
}
int main(){
    Plantation p[MAX];
    ifstream fIN;
    fIN.open(" ",ios_base::in);
    //docfile(fIN,p);
    ofstream fOUT;
    fOUT.open(" ",ios_base::out);
    fIN.close();
    return 0;
}
