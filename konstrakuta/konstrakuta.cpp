
#include <iostream>


class Player
{
    
public:

	std::string Name;


int HP;
int MP;
int ATK;
int DEF;
int SPD;



    //コンストラクタ
    Player()
		:Player("Default", 100)
    {

    }


    Player(std::string name, int hp=100,int mp=0,int atk=1,int def=1,int spd=1) 
        :Name(name), HP(hp), MP(mp), ATK(atk), DEF(def), SPD(spd)
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
    Player playre2("勇者", 200,0,10,5,1);


	Show(player1);
    Show(playre2);
}

