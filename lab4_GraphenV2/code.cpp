#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(){
    std::string input;
    std::vector<std::vector<int>> data;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    int a = 0, b = 0;
    for(int i = 0; i<100; i++){
        std::getline(ss, input, ';');
        if(input.empty()){
            break;
        }else{
            std::stringstream ss2(input);
            std::getline(ss2, input, '-');
            a = std::stoi(input);
            std::getline(ss2, input, '-');//das zweite '-' löschen
            std::getline(ss2, input);
            b = std::stoi(input);
            data.push_back({a,b});
        }
    }

    std::vector<std::vector<int>> Graph(255, std::vector<int>(2, 0));
    for(int i = 0; i < data.size(); i++){
        Graph[data[i][0]][0]=data[i][0];
        Graph[data[i][0]].push_back(data[i][1]);
    }
    for(int i = 0; i < data.size(); i++){
        for(int j = 2; j < Graph[i].size(); j++){
            int eineverknotung = Graph[i][j];
            if(Graph[eineverknotung][1]==1){
                Graph[i][1]=1;
            }
            if(eineverknotung!=i){
                Graph[eineverknotung][1]=1;     //das element wurde endeckt
            }
        }
    }


    if(Graph[1][2]!=1){
        Graph[1][1] = 1;
    }else{
        Graph[1][1] = 0;
    }

    int z = 1;
    for(int i = 0; i < Graph.size(); i++){
        if(Graph[i][0] != 0){
            if(Graph[i][1] == 0){
                z = 0;
            }
        }
    }
    std::cout << z << std::endl;






    
    for(int i = 0; i < Graph.size(); i++){
        if(Graph[i][0] != 0){
            std::cout << Graph[i][0] << ": ";
            for(int j = 1; j < Graph[i].size(); j++){
                std::cout << Graph[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    







    
}   