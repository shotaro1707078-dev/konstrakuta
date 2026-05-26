
#include <iostream>


struct PlayerSettings
{
  
    int HP;
    int MP;
    int ATK;
    int DEF;
    int SPD;
 
};

PlayerSettings hero = {
    1000,100,100,50,10
};



class Player
{
    
public:

	std::string Name;


int HP;
int MP;
int ATK;
int DEF;
int SPD;

Player(std::string name, const PlayerSettings settings)
    :Player(name, settings.HP, settings.MP, settings.ATK, settings.DEF, settings.SPD)
{

}


    //コンストラクタ
    Player()
		:Player("Default", 100)
    {

    }


    Player(std::string name, int hp=100,int mp=0,int atk=1,int def=1,int spd=1) 
        :Name(name), HP(hp), MP(mp), ATK(atk), DEF(def), SPD(spd)
    {
	}

    Player(const Player& other)
        :Name(other.Name), HP(other.HP), MP(other.MP), ATK(other.ATK), DEF(other.DEF), SPD(other.SPD)
    {
    }

};

void Show(const Player& player)
{
    std::cout << "Name:" << player.Name 
        << ",HP:" << player.HP 
		<< ",MP:" << player.MP
		<< ",ATK:" << player.ATK
		<< ",DEF:" << player.DEF
		<< ",SPD:" << player.SPD
        << std::endl;
}

int main()
{


 Player player1;
 Player playre2("勇者",100,0,1,1,1);
 Player player3("勇者", hero);




	Show(player1);
    Show(playre2);
    Show(player3);
}

