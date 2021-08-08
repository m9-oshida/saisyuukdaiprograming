//
//  main.cpp
//  最終課題１
//
//  Created by 押田悠冶 on 2021/08/06.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Player {
    string name;
    string team;
    int height;
    int weight;
    string position;
    Player(const string& newName,string newTeam, int newHeight, int newWeight,string newPosition) : name(newName),team(newTeam), height(newHeight), weight(newWeight),position(newPosition){}
};

int a=5;
bool operator<(const Player& p1, const Player& p2){
    if(a%2==1) return p1.height< p2.height;
    else return p1.weight<p2.weight;
}
     
    void showplayers(vector<Player>&v,bool b){
vector<Player> players;
        v.emplace_back("青柳晃洋","阪神",183,80,"投手");
        v.emplace_back("岩崎優","阪神",185,89,"投手");
        v.emplace_back("森下暢仁","広島",180,77,"投手");
        v.emplace_back("伊藤大海","日ハム",176,82,"投手");
        v.emplace_back("山本由伸","オリックス",178,80,"投手");
        v.emplace_back("田中将大","楽天",188,97,"投手");
        v.emplace_back("山﨑康晃","横浜",179,88,"投手");
        v.emplace_back("栗林良吏","広島",178,83,"投手");
        v.emplace_back("千賀滉大","ソフトバンク",187,89,"投手");
        v.emplace_back("大野雄大","中日",183,83,"投手");
        v.emplace_back("平良海馬","西武",173,100,"投手");
        v.emplace_back("梅野隆太郎","阪神",173,75,"補手");
        v.emplace_back("甲斐拓也","ソフトバンク",170,85,"補手");
        v.emplace_back("山田哲人","ヤクルト",180,76,"内野手");
        v.emplace_back("源田壮亮","西武",179,75,"内野手");
        v.emplace_back("浅村栄斗","楽天",182,90,"内野手");
        v.emplace_back("菊池涼介","広島",171,68,"内野手");
        v.emplace_back("坂本勇人","巨人",186,86,"内野手");
        v.emplace_back("村上宗隆","ヤクルト",188,97,"外野手");
        v.emplace_back("近藤健介","日本ハム",171,85,"外野手");
        v.emplace_back("柳田悠岐","ソフトバンク",188,87,"外野手");
        v.emplace_back("栗原陵矢","ソフトバンク",178,78,"外野手");
        v.emplace_back("吉田正尚","オリックス",173,85,"外野手");
        v.emplace_back("鈴木誠也","広島",181,98,"外野手");

        sort(v.begin(),v.end());}
    
int main(){
    vector<Player> players;
    showplayers(players,true);
    for (auto p : players){
        cout<<p.name<<":"<<p.team<<","<<p.height<<"cm"<<","<<p.weight<<"kg"<<","<<p.position<<endl;}
        
        }

