#include<iostream>
#include<map>
#include<string>
int main()
{
    std::map<int, int> m{ {1,2}, {2,3}, {3,4} };  
    std::map<std::string, int> map1;
    map1["st1"]=100;
    map1["st2"]=200;
    map1["st3"]=300;
    map1["st4"]=400;
    std::map<char, int> map2(map1.begin(), map1.end());
    std::map<char, int> map3(m);
}
      
