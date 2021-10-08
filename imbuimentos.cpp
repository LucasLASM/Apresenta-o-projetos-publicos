#include <iostream>
#include <locale>
using namespace std;
int main()

{
	int op;

	char opcao;
	setlocale(LC_ALL, "ptb");
	do
	{
		cout << "\n 1 para imbuimento de critico";
		cout << "\n 2 para imbuimento de dano de fogo";
		cout << "\n 3 para imbuimento de dano de gelo";
		cout << "\n 4 para imbuimento de dano de pox";
		cout << "\n 5 para imbuimento de dano de morte";
		cout << "\n 6 para imbuimento de dano de energy";
		cout << "\n 7 para imbuimento de vampirismo";
		cout << "\n 8 para imbuimento de void";
		cout << "\n 9 para imbuimento de proteção de gelo";
		cout << "\n 10 para imbuimento de proteção de fogo";
		cout << "\n 11 para imbuimento de proteção de energy";
		cout << "\n 12 para imbuimento de proteção  de pox";
		cout << "\n 13 para imbuimento de proteção  de morte";
		cout << "\n 14 imbuing club skill";
		cout << "\n 15 imbuing distance skill";
		cout << "\n 16 imbuing sward skill";
		cout << "\n 17 imbuing axe skill";
		cout << "\n 18 imbuing shield skill";
		cout << "\n 19 imbuing magic level";

		cout << "\n escolha uma opção: ";

		cin >> op;

		switch (op)
		{
		case 1:
			cout << ("20 protective charms + 25 sabretooth + 5 vexclaw talons");
			break;
		case 2:
			cout << ("25 fiery hearts + 5 green dragon scales + 5 demon horns");
			break;
		case 3:
			cout << ("25 frosty hearts + 10  Seacrest Hairs  + 5  Polar Bear Paws");
			break;
		case 4:
			cout << ("25  Swamp Grasses + 20  Poisonous Slimes  + 2 Slime Hearts");
			break;
		case 5:
			cout << ("25  Pile of Grave Earth + 20 Demonic Skeletal Hands  + 5 Petrified Screams");
			break;
		case 6:
			cout << ("25 Rorc Feathers + 5 Peacock Feather Fans  + 1 Energy Vein");
			break;
		case 7:
			cout << ("25  Vampire Teeth + 15 Bloody Pincers  + 5 Piece of Dead Brain");
			break;
		case 8:
			cout << ("25  Rope Belts + 25 Silencer Claws + 5 Grimeleech Wings");
			break;
		case 9:
			cout << ("25 Winter Wolf Furs + 15 Thick Furs + 10  Deepling Warts");
			break;
		case 10:
			cout << ("20  Green Dragon Leathers + 10  Blazing Bones + 5 Draken Sulphurs");
			break;
		case 11:
			cout << ("20  Wyvern Talismans + 15 Crawler Head Platings + 10 Wyrm Scales");
			break;
		case 12:
			cout << ("25 Piece of Swampling Wood + 20 Snake Skins + 10 Brimstone Fangss");
			break;
		case 13:
			cout << ("25 Flask of Embalming Fluid + 20 Gloom Wolf Furs + 5 Mystical Hourglasses");
			break;
		case 14:
			cout << ("20 Cyclops Toe + 15 Ogre Nose Rings + 10 Warmasters Wristguards");
			break;
		case 15:
			cout << ("25 Elven Scouting Glasses + 20 Elven Hoofs + 10 Metal Spikes");
			break;
		case 16:
			cout << ("25 Lion's Mane + 25 Mooh'tah Shells + 5 War Crystals");
			break;
		case 17:
			cout << ("20 Orc Tooth + 25 Battle Stones + 20 Moohtant Horns");
			break;
		case 18:
			cout << ("20 Piece of Scarab Shell + 25 Brimstone Shells + 25 Frazzle Skins");
			break;
		case 19:
			cout << ("25 Elvish Talismans + 15 Broken Shamanic Staffs + 15 Strand of Medusa Hair");
			break;
		defaut:
			cout << "\n INVALIDO";
		}
		cout << "\n DIGITE QUALQUER LETRA E PRESSIONE O ENTER PARA RECOMEÇAR: ";
		cin >> opcao;

	} while (opcao == 's' || opcao != 's');
}
