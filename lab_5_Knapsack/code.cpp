#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);
    std::getline(ss, input, ' ');
    while(input.empty()){
        std::getline(ss, input, ' ');
    }
    int itemcount = std::stoi(input);
    int c = itemcount;
    std::getline(ss, input, ' ');
    while(input.empty()){
        std::getline(ss, input, ' ');
    }
    int volumen = std::stoi(input);

    int wert=0;
    int gewicht=0;
    std::vector<std::vector<int>> items;


    while(c--){
        std::getline(ss, input, ' ');
        while(input.empty()){
            std::getline(ss, input, ' ');
        }
        wert = std::stoi(input);
            std::getline(ss, input, ' ');
        while(input.empty()){
            std::getline(ss, input, ' ');
        }
        gewicht = std::stoi(input);
        items.push_back({wert, gewicht, itemcount-c});
    }


    for (int i = 0; i < items.size() - 1; i++) {
        for (int j = 0; j < items.size() - i - 1; j++) {
            if (items[j][1] < items[j + 1][1]) {
                std::swap(items[j], items[j + 1]);
            }
        }
    }


    int preisleistung = 0;
    for(int i=0; i<items.size(); i++){
        preisleistung = items[i][0]/items[i][1];
        items[i].push_back(preisleistung);
    }




    int sum = 0;
    int i = items.size();
    while(i--){
        if(sum<=volumen){
            std::cout << items[i][2] << " ";
            sum+=items[i][1];
        }else{
            sum-=items[i-1][1];
            break;}
    }
    //std::cout << sum << std::endl;
    
    

}