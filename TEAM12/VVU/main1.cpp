#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main()
{
    LOG_D("\n***********A\n");
    char ten[] = "Mai Van Vu";
    char lop[] = "KTLT - N14";
    int thang =3; 
    int nam =2022;
    string name = StringFormat("%s %s %02d %04d",ten, lop, thang, nam);
    LOG_IT("%s\n",name.c_str());
    vector<string> arrName = SplitString(name.c_str()," ");
    int iCnt= (int) arrName.size();
    for(int i=0;i<iCnt;i++){
        LOG_WT("%d [%s]\n",i,arrName[i].c_str());
    }
}
