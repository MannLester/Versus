#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <string.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;
//miscellaneous
char main_menu;
char M;
//leaderbords
void leaderboard_for_ttt();
void leaderboard_for_password();
void leadebroard_for_1v1();
char next_char;
//tictactoe
void instruc_for_ttt();
string player1_name_ttt, player2_name_ttt;
void math_randomizer();
bool math_verify;
char math_answer;
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin(), main_for_ttt();
void board();
//fightinggame
int player1_ttt_score, player2_ttt_score;
int points_correct1;
int points_correct2;
int points_wrong1;
int points_wrong2;
int accu1;
int accu2;
int final_result1_win = 0;
int final_result2_win = 0;
int final_result1_lose = 0;
int final_result2_lose = 0;
const int points_win = 100;
const int points_lose = 50;
void results_1v1_fighting_game();
int correct_answer1 = 0;
int correct_answer2 = 0;
int wrong_answer1 = 0;
int wrong_answer2 = 0;
string status_play;
string status_debuff_player1;
string status_debuff_player2;
void winner_declare_of_the_game();
void thundervsthunder();
void executevsexecute(), executevsthunder();
void doorvsdoor(), doorvsexecute(), doorvsthunder();
void refinevsrefine(), refinevsdoor(), refinevsexecute(), refinevsthunder();
void chainsvschains(), chainsvsrefine(), chainsvsdoor(), chainsvsexecute(), chainsvsthunder();
void mirrorvsmirror(), mirrorvschains(), mirrorvsrefine(), mirrorvsdoor(), mirrorvsexecute(), mirrorvsthunder();
void spearvsmirror(), spearvschains(), spearvsrefine(), spearvsdoor(), spearvsexecute(), spearvsthunder(), spearvsspear();
void healvsspear(), healvschains(), healvsmirror(), healvsrefine(), healvsdoor(), healvsexecute(), healvsthunder(), healvsheal();
void barriervsbarrier(), barriervsspear(), barriervsheal(), barriervsmirror(), barriervschains(), barriervsrefine(), barriervsdoor(), barriervsexecute(), barriervsthunder();
void fireballvsfireball(), fireballvsbarrier(), fireballvsheal(), fireballvsspear(), fireballvsmirror(), fireballvschains(), fireballvsrefine(), fireballvsdoor(), fireballvsexecute(), fireballvsthunder();
bool thunderdmg, thunderstun;
float dmg_of_player1, dmg_of_player2;
void randomizer_attacks(), prompt_for_player1(), prompt_for_player2();
char player1_attack, player2_attack;
bool fireball1, barrier1, heal1, spear1, mirror1, chains1, refine1, door1, execute1, thunder1;
bool fireball2, barrier2, heal2, spear2, mirror2, chains2, refine2, door2, execute2, thunder2;
bool burned1, burned2, chained1, chained2, stunned1, stunned2;
string attack_name1, attack_name2, attack_name3, description1, description2, description3;
int num1, num2, num3, th1;
int battle;
int winner_name;
char choice;
void multigames();
void multigames();
char choice2;
void fighting_game();
void fighting_game_user_input();
char answer;
int play1, play2, i;
char player1_choice, player2_choice;
float multihearts_player1 = 3;
float multihearts_player2 = 3;
char bar;
string player1_name;
string player2_name;
void questions();
void rps();
void rps_decision();
string player1_real;
string player2_real;
char ropasc1[1], ropasc2[1], player1_rps, player2_rps;
char rock = 'R', paper = 'P', scissor = 'S';
int winner;
int f1 = 0, f2 = 0;
void winner1_declare();
int x1;
int x2;
void winner2_declare();
void bvb(), bvc(), bvh(), cvb(), cvc(), cvh(), hvb(), hvc(), hvh();
int c1, c2 = 0;
int player1_winner, player2_winner;
void prompt_for_rps();
//password game
string word1, word2, word3, word4, word5, word6, word7, word8, word9, word10, word11, word12, word13, word14, word15, word16, word17, word18, word19, word20;
string word21, word22, word23, word24, word25, word26, word27, word28, word29, word30, word31, word32, word33, word34, word35, word36, word37, word38, word39, word40;
int turn2 = 0;
void password_normalmode_results();
int word_player1, word_player2;
bool two1, two2, two3, two4, two5, two6, two7, two8, two9, two10, two11, two12, two13, two14, two15, two16, two17, two18, two19, two20 = false;
bool one1, one2, one3, one4, one5, one6,one7, one8, one9, one10, one11, one12, one13, one14, one15, one16, one17, one18, one19, one20 = false;
string answer1_1, answer1_2, answer1_3, answer1_4, answer1_5, answer1_final;
bool player1_turn = true;
int password_normalmode_points1;
int password_normalmode_points2;
char password_choice1;
string player1_passwordname, player2_passwordname;
void password_game_intro(), passwordmode_normal();

int main() {
	system("cls");
	cout << "     \t\t\t000       000   000000   0000000   000000   00   00   000000" << endl;
	cout << "     \t\t\t000     000    00       00    0   00       00   00   00" << endl;
	cout << "     \t\t\t000   000     0000     0000000   000000   00   00   000000" << endl;
	cout << "     \t\t\t000 000      00       00  00        00   00   00       00" << endl;
	cout << "     \t\t\t00000       000000   00   00   000000   0000000   000000" << endl;
	cout << "    \t\t\t==================================================================" << endl;
	cout << "               " << endl;
	cout << "         \t\t\tMultiplayer        " << endl;
	cout << "         \t\t\t-            " << endl;
	cout << "         \t\t\tVs.Computer" << endl;
	cout << "         \t\t\t   -" << endl;
	cout << "         \t\t\tLeaderboards" << endl;
	cout << "         \t\t\t-           " << endl;
	cout << "         \t\t\tExit       " << endl;
	cout << "         \t\t\t-           " << endl;
	cout << "";
	cout << "";
	cout << "";
	cout << "\t\t\tPress the underlined letter " << endl;
	cout << "";
	cout << "";
	cout << "\t\t\tWhat is it that you want to do? ";
	cin >> choice;

	switch (choice) {
	case 'M':
		multigames();
		break;
	case 'E':
		return 0;
	case 'L':
		leadebroard_for_1v1();
		break;
	default:
		main();
	}
}

void multigames() {
	system("cls");
	cout << "\t\t\t\t\t a.) 1V1 Fighting Game (Quiz: General Knowledge)" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t b.) Password Game (Quiz: Literature)" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t c.) Tic Tac Toe (Quiz: Mathematics)" << endl;
	cout << endl;
	cout << "\t\t\t\t\t Pick your Game: ";
	cin >> choice2;

	switch (choice2) {
	case 'a':
		fighting_game_user_input();
	break;
	case 'b':
		password_game_intro();
	break;
	case 'c':
		instruc_for_ttt();
	default:
		multigames();
	}
}

void fighting_game_user_input() {
	system("cls");
	multihearts_player1 = 3;
	multihearts_player2 = 3;
	cout << "Player 1 name: " << endl;
	cin >> player1_name;
	system("cls");
	cout << "" << endl;
	cout << "" << endl;
	cout << "            Hi " << player1_name << "(Player1)!" << endl;
	cout << "          -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
	cout << "           Choose         your         character!" << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                               CCCCCCCCCCCCCCCCCCCC                           HHHHHHHHHHHHHHHHHH" << endl;
	cout << "             BB                                        BB                         CCCCCCC              CCCCCC                     HHHHH               HHHH" << endl;
	cout << "            BB                       BB                  BB                     CCCCCCC                   CCCCC                  HHH                     HHH" << endl;
	cout << "            BB                       BB                  BB                    CCC                           CCC                 H                          H" << endl;
	cout << "            BB    BB       BB                            BB                   CCC                             CCC               H                       HHHHHHH" << endl;
	cout << "            BB    BB       BB                            BB                  CCC                       CCC    CCC              H                       H    HH H" << endl;
	cout << "            BB                                BB         BB                 CCC     CCC                CCC     CCC             H     HHHHHH           H     HH  H" << endl;
	cout << "            BB          BB             B      BB         BB  B              CCC     CCC                        CCC             H    H  HH  H          H         H" << endl;
	cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB             CC                                  CC             H   H   HH   H          H       H" << endl;
	cout << "   BB  BBBB BB                       BBB BB              BBB BBB            CC                C C               CC             H   H        H           HHHHHHH" << endl;
	cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB            CC                                  CC             H    H      H   HHHHHHHHH      H" << endl;
	cout << "    BBBB  BBBB     BB         BB   BBBBB     BBBBBBBBBBBB    BBBBB          CC                                  CC             H     HHHHHH    H      H      H" << endl;
	cout << "     BBBB  BBB                BB   BBB      B              B   BBB          CC       CCCCCCCCCCCCCCCCCCCCCC     CC              H              HHHHHHH    HHH" << endl;
	cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB          CC             CCCCCCCC             CC               H                      HHH" << endl;
	cout << "           BBB  BB      BB         BBB                         BBB            CC                              CC                  HHHH              HHHHHH" << endl;
	cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB               CCC                        CCC                       H                 H" << endl;
	cout << "          BBBBBB                        BB                    BB                  CCC                    CCC                        H    H   HHHH     H  HHHHHHH" << endl;
	cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                     CCC                 CCC                        H     HHHH    H    HHHH  H   H" << endl;
	cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                         CCC           CCC                          HH             H    H    HH   H" << endl;
	cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                             CCCCCCCCCCCCC                           H HHHHHHH       H    HHHH      H" << endl;
	cout << "                                                                                              CC                                 H        HHHHHHH     H   HHHHHH" << endl;
	cout << "                                                                                              CC                                 H                     H" << endl;
	cout << "" << endl;
	cout << "       	    		B R E A D C A T                                        C L U E L E S S  I D I O T                              H Y P E R  M A N" << endl;
	cout << " 			Passive: Cuteness Overload                           Passive: What? Let me try again                              Passive: Lots of energy" << endl;
	cout << " 			 Receives only 50% damage                  Gains another chance when you lose in rock, paper, scissors            Deals 50% more damage" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Press B for Breadcat, C for Clueless Idiot, and H for Hyperman" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "Which character do you choose? " << endl;
	cin >> player1_choice;

	switch (player1_choice) {
	case'B':
		system("cls");
		play1 = 1;
		cout << "Player 2 name: " << endl;
		cin >> player2_name;
		system("cls");
		cout << "" << endl;
		cout << "" << endl;
		cout << "            Hi " << player2_name << "(Player2)!" << endl;
		cout << "          -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
		cout << "           Choose         your         character!" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                               CCCCCCCCCCCCCCCCCCCC                           HHHHHHHHHHHHHHHHHH" << endl;
		cout << "             BB                                        BB                         CCCCCCC              CCCCCC                     HHHHH               HHHH" << endl;
		cout << "            BB                       BB                  BB                     CCCCCCC                   CCCCC                  HHH                     HHH" << endl;
		cout << "            BB                       BB                  BB                    CCC                           CCC                 H                          H" << endl;
		cout << "            BB    BB       BB                            BB                   CCC                             CCC               H                       HHHHHHH" << endl;
		cout << "            BB    BB       BB                            BB                  CCC                       CCC    CCC              H                       H    HH H" << endl;
		cout << "            BB                                BB         BB                 CCC     CCC                CCC     CCC             H     HHHHHH           H     HH  H" << endl;
		cout << "            BB          BB             B      BB         BB  B              CCC     CCC                        CCC             H    H  HH  H          H         H" << endl;
		cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB             CC                                  CC             H   H   HH   H          H       H" << endl;
		cout << "   BB  BBBB BB                       BBB BB              BBB BBB            CC                C C               CC             H   H        H           HHHHHHH" << endl;
		cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB            CC                                  CC             H    H      H   HHHHHHHHH      H" << endl;
		cout << "    BBBB  BBBB     BB         BB   BBBBB     BBBBBBBBBBBB    BBBBB          CC                                  CC             H     HHHHHH    H      H      H" << endl;
		cout << "     BBBB  BBB                BB   BBB      B              B   BBB          CC       CCCCCCCCCCCCCCCCCCCCCC     CC              H              HHHHHHH    HHH" << endl;
		cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB          CC             CCCCCCCC             CC               H                      HHH" << endl;
		cout << "           BBB  BB      BB         BBB                         BBB            CC                              CC                  HHHH              HHHHHH" << endl;
		cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB               CCC                        CCC                       H                 H" << endl;
		cout << "          BBBBBB                        BB                    BB                  CCC                    CCC                        H    H   HHHH     H  HHHHHHH" << endl;
		cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                     CCC                 CCC                        H     HHHH    H    HHHH  H   H" << endl;
		cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                         CCC           CCC                          HH             H    H    HH   H" << endl;
		cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                             CCCCCCCCCCCCC                           H HHHHHHH       H    HHHH      H" << endl;
		cout << "                                                                                              CC                                 H        HHHHHHH     H   HHHHHH" << endl;
		cout << "                                                                                              CC                                 H                     H" << endl;
		cout << "" << endl;
		cout << "       	    		B R E A D C A T                                        C L U E L E S S  I D I O T                              H Y P E R  M A N" << endl;
		cout << " 			Passive: Cuteness Overload                           Passive: What? Let me try again                              Passive: Lots of energy" << endl;
		cout << " 			 Receives only 50% damage                  Gains another chance when you lose in rock, paper, scissors            Deals 50% more damage" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Press B for Breadcat, C for Clueless Idiot, and H for Hyperman" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Which character do you choose? " << endl;
		cin >> player2_choice;
		break;
	case 'C':
		system("cls");
		play1 = 2;
		cout << "Player 2 name: " << endl;
		cin >> player2_name;
		system("cls");
		cout << "" << endl;
		cout << "" << endl;
		cout << "            Hi " << player2_name << "(Player2)!" << endl;
		cout << "          -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
		cout << "           Choose         your         character!" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                               CCCCCCCCCCCCCCCCCCCC                           HHHHHHHHHHHHHHHHHH" << endl;
		cout << "             BB                                        BB                         CCCCCCC              CCCCCC                     HHHHH               HHHH" << endl;
		cout << "            BB                       BB                  BB                     CCCCCCC                   CCCCC                  HHH                     HHH" << endl;
		cout << "            BB                       BB                  BB                    CCC                           CCC                 H                          H" << endl;
		cout << "            BB    BB       BB                            BB                   CCC                             CCC               H                       HHHHHHH" << endl;
		cout << "            BB    BB       BB                            BB                  CCC                       CCC    CCC              H                       H    HH H" << endl;
		cout << "            BB                                BB         BB                 CCC     CCC                CCC     CCC             H     HHHHHH           H     HH  H" << endl;
		cout << "            BB          BB             B      BB         BB  B              CCC     CCC                        CCC             H    H  HH  H          H         H" << endl;
		cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB             CC                                  CC             H   H   HH   H          H       H" << endl;
		cout << "   BB  BBBB BB                       BBB BB              BBB BBB            CC                C C               CC             H   H        H           HHHHHHH" << endl;
		cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB            CC                                  CC             H    H      H   HHHHHHHHH      H" << endl;
		cout << "    BBBB  BBBB     BB         BB   BBBBB     BBBBBBBBBBBB    BBBBB          CC                                  CC             H     HHHHHH    H      H      H" << endl;
		cout << "     BBBB  BBB                BB   BBB      B              B   BBB          CC       CCCCCCCCCCCCCCCCCCCCCC     CC              H              HHHHHHH    HHH" << endl;
		cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB          CC             CCCCCCCC             CC               H                      HHH" << endl;
		cout << "           BBB  BB      BB         BBB                         BBB            CC                              CC                  HHHH              HHHHHH" << endl;
		cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB               CCC                        CCC                       H                 H" << endl;
		cout << "          BBBBBB                        BB                    BB                  CCC                    CCC                        H    H   HHHH     H  HHHHHHH" << endl;
		cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                     CCC                 CCC                        H     HHHH    H    HHHH  H   H" << endl;
		cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                         CCC           CCC                          HH             H    H    HH   H" << endl;
		cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                             CCCCCCCCCCCCC                           H HHHHHHH       H    HHHH      H" << endl;
		cout << "                                                                                              CC                                 H        HHHHHHH     H   HHHHHH" << endl;
		cout << "                                                                                              CC                                 H                     H" << endl;
		cout << "" << endl;
		cout << "       	    		B R E A D C A T                                        C L U E L E S S  I D I O T                              H Y P E R  M A N" << endl;			cout << " 			Passive: Cuteness Overload                           Passive: What? Let me try again                              Passive: Lots of energy" << endl;
		cout << " 			 Receives only 50% damage                  Gains another chance when you lose in rock, paper, scissors            Deals 50% more damage" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Press B for Breadcat, C for Clueless Idiot, and H for Hyperman" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Which character do you choose? " << endl;
		cin >> player2_choice;
		break;
	case 'H':
		system("cls");
		play1 = 3;
		cout << "Player 2 name: " << endl;
		cin >> player2_name;
		system("cls");
		cout << "" << endl;
		cout << "" << endl;
		cout << "            Hi " << player2_name << "(Player2)!" << endl;
		cout << "          -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
		cout << "           Choose         your         character!" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                               CCCCCCCCCCCCCCCCCCCC                           HHHHHHHHHHHHHHHHHH" << endl;
		cout << "             BB                                        BB                         CCCCCCC              CCCCCC                     HHHHH               HHHH" << endl;
		cout << "            BB                       BB                  BB                     CCCCCCC                   CCCCC                  HHH                     HHH" << endl;
		cout << "            BB                       BB                  BB                    CCC                           CCC                 H                          H" << endl;
		cout << "            BB    BB       BB                            BB                   CCC                             CCC               H                       HHHHHHH" << endl;
		cout << "            BB    BB       BB                            BB                  CCC                       CCC    CCC              H                       H    HH H" << endl;
		cout << "            BB                                BB         BB                 CCC     CCC                CCC     CCC             H     HHHHHH           H     HH  H" << endl;
		cout << "            BB          BB             B      BB         BB  B              CCC     CCC                        CCC             H    H  HH  H          H         H" << endl;
		cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB             CC                                  CC             H   H   HH   H          H       H" << endl;
		cout << "   BB  BBBB BB                       BBB BB              BBB BBB            CC                C C               CC             H   H        H           HHHHHHH" << endl;
		cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB            CC                                  CC             H    H      H   HHHHHHHHH      H" << endl;
		cout << "    BBBB  BBBB     BB         BB   BBBBB     BBBBBBBBBBBB    BBBBB          CC                                  CC             H     HHHHHH    H      H      H" << endl;
		cout << "     BBBB  BBB                BB   BBB      B              B   BBB          CC       CCCCCCCCCCCCCCCCCCCCCC     CC              H              HHHHHHH    HHH" << endl;
		cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB          CC             CCCCCCCC             CC               H                      HHH" << endl;
		cout << "           BBB  BB      BB         BBB                         BBB            CC                              CC                  HHHH              HHHHHH" << endl;
		cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB               CCC                        CCC                       H                 H" << endl;
		cout << "          BBBBBB                        BB                    BB                  CCC                    CCC                        H    H   HHHH     H  HHHHHHH" << endl;
		cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                     CCC                 CCC                        H     HHHH    H    HHHH  H   H" << endl;
		cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                         CCC           CCC                          HH             H    H    HH   H" << endl;
		cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                             CCCCCCCCCCCCC                           H HHHHHHH       H    HHHH      H" << endl;
		cout << "                                                                                              CC                                 H        HHHHHHH     H   HHHHHH" << endl;
		cout << "                                                                                              CC                                 H                     H" << endl;
		cout << "" << endl;
		cout << "       	    		B R E A D C A T                                        C L U E L E S S  I D I O T                             H Y P E R  M A N" << endl;
		cout << " 			Passive: Cuteness Overload                           Passive: What? Let me try again                              Passive: Lots of energy" << endl;
		cout << " 		Receives only 50% damage                    Gains another chance when you lose in rock, paper, scissors            Deals 50% more damage" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Press B for Breadcat, C for Clueless Idiot, and H for Hyperman" << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "Which character do you choose? " << endl;
		cin >> player2_choice;
		break;
		default:
		fighting_game_user_input();
	}
	
	switch (player2_choice) {
	case 'B':
		system("cls");
		play2 = 1;
		break;
	case 'C':
		system("cls");
		play2 = 2;
		break;
	case'H':
		system("cls");
		play2 = 3;
		break;
	default:
		fighting_game_user_input();
	}
	if (play1 == 1 and play2 == 1) {
		bvb();
	}
	else if (play1 == 1 and play2 == 2) {
		bvc();
	}
	else if (play1 == 1 and play2 == 3) {
		bvh();
	}
	else if (play1 == 2 and play2 == 1) {
		cvb();
	}
	else if (play1 == 2 and play2 == 2) {
		cvc();
	}
	else if (play1 == 2 and play2 == 3) {
		cvh();
	}
	else if (play1 == 3 and play2 == 1) {
		hvb();
	}
	else if (play1 == 3 and play2 == 2) {
		hvc();
	}
	else if (play1 == 3 and play2 == 3) {
		hvh();
	}
}

void bvb() {
	system("cls");
	battle = 1;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                             " << player1_name << "                                                                                      " << player2_name << endl;
	cout << "                             Player 1                                                                                     Player 2" << endl;
	cout << "" << endl;
	cout << "                             Health: " << setprecision(2) << multihearts_player1 << "                                                                                    Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                                      BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB" << endl;
	cout << "             BB                                        BB                                                  BB                                        BB" << endl;
	cout << "            BB                       BB                  BB                                              BB                   BB                      BB" << endl;
	cout << "            BB                       BB                  BB                                              BB                   BB                      BB" << endl;
	cout << "            BB    BB       BB                            BB                                              BB                           BB        BB    BB" << endl;
	cout << "            BB    BB       BB                            BB                                              BB                           BB        BB    BB" << endl;
	cout << "            BB                                BB         BB                                              BB         BB                                BB" << endl;
	cout << "            BB          BB             B      BB         BB  B                                        B  BB         BB      B             BB          BB" << endl;
	cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB                                      BBBBBB              BBBBB            BB          BB  BBBBBBB" << endl;
	cout << "   BB  BBBB BB                       BBB BB              BBB BBB                                    BBB BBB              BB BBB                       BB BBBB  BB" << endl;
	cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB                                    BBB  BB             BB  BBB                BB     BBBBB  BBBB" << endl;
	cout << "    BBBB  BBBB     BB         BB   BBBBB    BBBBBBBBBBBBB    BBBBB                                BBBBB    BBBBBBBBBBBBB    BBBBB   BB         BB     BBBB  BBBB" << endl;
	cout << "     BBBB  BBB                BB   BBB      B              B   BBB                                BBB   B              B      BBB   BB                BBB  BBBB" << endl;
	cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB                                BBB   BB             BB     BBB                 BB  BBBBBBBBB" << endl;
	cout << "           BBB  BB      BB         BBB                         BBB                                BBB                         BBB           BB    BB  BBB" << endl;
	cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB                                  BB     BBBBBBBBBBBBBB    BB              BB        BB" << endl;
	cout << "          BBBBBB                        BB                    BB                                    BB                                              BBBBBB" << endl;
	cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                      BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB " << endl;
	cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                                        BBBBBBBB     BBBBBBBBB         BBBBBBBBBBBBBBBBB    B" << endl;
	cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                                            BBBB       BBBBBBB             BBBBBB     BBBBBBBBB" << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t" << status_play << endl;


	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	}

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}


	if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	}
	else if (player1_winner == 1) {
		prompt_for_player1();
	}
	else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void bvc() {
	system("cls");
	battle = 2;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                             " << player1_name << "                                                                               " << player2_name << endl;
	cout << "                             Player 1                                                                              Player 2" << endl;
	cout << "" << endl;
	cout << "                             Health: " << setprecision(2) << multihearts_player1 << "                                                                             Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                                     CCCCCCCCCCCCCCCCCCCC" << endl;
	cout << "             BB                                        BB                                               CCCCCCC              CCCCCC" << endl;
	cout << "            BB                       BB                  BB                                           CCCCCCC                   CCCCC" << endl;
	cout << "            BB                       BB                  BB                                          CCC                           CCC" << endl;
	cout << "            BB    BB       BB                            BB                                         CCC                             CCC" << endl;
	cout << "            BB    BB       BB                            BB                                        CCC                       CCC    CCC" << endl;
	cout << "            BB                                BB         BB                                       CCC     CCC                CCC     CCC" << endl;
	cout << "            BB          BB             B      BB         BB  B                                    CCC     CCC                        CCC" << endl;
	cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB                                   CC                                  CC" << endl;
	cout << "   BB  BBBB BB                       BBB BB              BBB BBB                                  CC                C C               CC" << endl;
	cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB                                  CC                                  CC" << endl;
	cout << "    BBBB  BBBB     BB         BB   BBBBB    BBBBBBBBBBBBB    BBBBB                                CC                                  CC" << endl;
	cout << "     BBBB  BBB                BB   BBB      B              B   BBB                                CC       CCCCCCCCCCCCCCCCCCCCCC     CC" << endl;
	cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB                                CC             CCCCCCCC             CC" << endl;
	cout << "           BBB  BB      BB         BBB                         BBB                                  CC                              CC" << endl;
	cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB                                     CCC                        CCC" << endl;
	cout << "          BBBBBB                        BB                    BB                                        CCC                    CCC" << endl;
	cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                           CCC                 CCC" << endl;
	cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                                               CCC           CCC" << endl;
	cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                                                   CCCCCCCCCCCCC" << endl;
	cout << " 																													                                                                                                                     CC" << endl;
	cout << " 																													                                                                                                                     CC" << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}
	c1 = 0;
	c2 = 0;

	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	}else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	}
	else if (player1_winner == 1) {
		prompt_for_player1();
	}
	else if (player2_winner == 1) {
		prompt_for_player2();
	}
}
void bvh() {
	system("cls");
	battle = 3;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                             " << player1_name << "                                                                              " << player2_name << endl;
	cout << "                             Player 1                                                                             Player 2" << endl;
	cout << "" << endl;
	cout << "                             Health: " << setprecision(2) << multihearts_player1 << "                                                                            Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "               BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                                     HHHHHHHHHHHHHHHHHH" << endl;
	cout << "             BB                                        BB                                               HHHH                HHHHH" << endl;
	cout << "            BB                       BB                  BB                                           HHH                      HHH" << endl;
	cout << "            BB                       BB                  BB                                          H                           H" << endl;
	cout << "            BB    BB       BB                            BB                                        HHHHHHH                        H" << endl;
	cout << "            BB    BB       BB                            BB                                       H    HH H                        H" << endl;
	cout << "            BB                                BB         BB                                      H     HH  H            HHHHHH     H" << endl;
	cout << "            BB          BB             B      BB         BB  B                                   H         H           H  HH  H    H" << endl;
	cout << "   BBBBBBB  BB          BB            BBBBB              BBBBBB                                   H       H           H   HH   H   H " << endl;
	cout << "   BB  BBBB BB                       BBB BB              BBB BBB                                   HHHHHHH            H        H   H" << endl;
	cout << "   BBBB  BBBBB     BB                BBB  BB             BB  BBB                                   H      HHHHHHHHH    H      H    H" << endl;
	cout << "    BBBB  BBBB     BB         BB   BBBBB    BBBBBBBBBBBBB    BBBBB                                  H      H      H     HHHHHH     H" << endl;
	cout << "     BBBB  BBB                BB   BBB      B              B   BBB                                   HHH    HHHHHHH               H" << endl;
	cout << "     BBBBBBBBB  BB                 BBB     BB             BB   BBB                                     HHH                       H" << endl;
	cout << "           BBB  BB      BB         BBB                         BBB                                      HHHHHH               HHHH" << endl;
	cout << "            BB          BB            BB    BBBBBBBBBBBBBB     BB                                         H                  H" << endl;
	cout << "          BBBBBB                        BB                    BB                                  HHHHHHH  H       HHHH   H   H" << endl;
	cout << "         BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB                                  H   H  HHHH      H   HHHH     H" << endl;
	cout << "         B    BBBBBBBBBBBBBBBBB         BBBBBBBBB     BBBBBBBB                                   H   HH           H           HH" << endl;
	cout << "         BBBBBBBBB     BBBBBB             BBBBBBB       BBBB                                     H      HHHH      H      HHHHHH H" << endl;
	cout << " 								                                  HHHHHH            HHHHHH       H	" << endl;
	cout << " 																			  " << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}
	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	}else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void cvb() {
	system("cls");
	battle = 4;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                     " << player1_name << "                                                                             " << player2_name << endl;
	cout << "                     Player 1                                                                            Player 2" << endl;
	cout << "" << endl;
	cout << "                     Health: " << setprecision(2) << multihearts_player1 << "                                                                           Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "              CCCCCCCCCCCCCCCCCCCC                                                   BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB" << endl;
	cout << "          CCCCCCC              CCCCCC                                              BB                                        BB" << endl;
	cout << "        CCCCCCC                   CCCCC                                          BB                   BB                      BB" << endl;
	cout << "       CCC                           CCC                                         BB                   BB                      BB" << endl;
	cout << "      CCC                             CCC                                        BB                           BB        BB    BB" << endl;
	cout << "     CCC                       CCC    CCC                                        BB                           BB        BB    BB" << endl;
	cout << "    CCC     CCC                CCC     CCC                                       BB         BB                                BB" << endl;
	cout << "    CCC     CCC                        CCC                                    B  BB         BB      B             BB          BB" << endl;
	cout << "    CC                                  CC                                   BBBBBB              BBBBB            BB          BB  BBBBBBB" << endl;
	cout << "    CC                C C               CC                                  BBB BBB              BB BBB                       BB BBBB  BB" << endl;
	cout << "    CC                                  CC                                  BBB  BB             BB  BBB                BB     BBBBB  BBBB" << endl;
	cout << "    CC       CCCCCCCCCCCCCCCCCCCCCC     CC                                BBBBB    BBBBBBBBBBBBB    BBBBB   BB         BB     BBBB  BBBB" << endl;
	cout << "    CC             CCCCCCCC             CC                                BBB   B              B      BBB   BB                BBB  BBBB" << endl;
	cout << "      CC                              CC                                  BBB   BB             BB     BBB                 BB  BBBBBBBBB" << endl;
	cout << "        CCC                        CCC                                    BBB                         BBB           BB    BB  BBB" << endl;
	cout << "          CCC                    CCC                                       BB     BBBBBBBBBBBBBB    BB              BB        BB" << endl;
	cout << "            CCC                 CCC                                         BB                                              BBBBBB" << endl;
	cout << "               CCC           CCC                                             BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB" << endl;
	cout << "                 CCCCCCCCCCCCC                                                BBBBBBBB     BBBBBBBBB         BBBBBBBBBBBBBBBBB    B" << endl;
	cout << "                     CC                                                        BBBB       BBBBBBB             BBBBBB     BBBBBBBBB" << endl;
	cout << "                     CC								  " << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}

	c1 = 0;
	c2 = 0;

	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	} else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void cvc() {
	system("cls");
	battle = 5;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                    " << player1_name << "                                                                " << player2_name << endl;
	cout << "                    Player 1                                                               Player 2" << endl;
	cout << "" << endl;
	cout << "                    Health: " << setprecision(2) << multihearts_player1 << "                                                              Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "              CCCCCCCCCCCCCCCCCCCC                                                   CCCCCCCCCCCCCCCCCCCC" << endl;
	cout << "          CCCCCCC              CCCCCC                                            CCCCCCC              CCCCCC" << endl;
	cout << "        CCCCCCC                   CCCCC                                        CCCCCCC                   CCCCC" << endl;
	cout << "       CCC                           CCC                                      CCC                           CCC" << endl;
	cout << "      CCC                             CCC                                    CCC                             CCC" << endl;
	cout << "     CCC                       CCC    CCC                                   CCC                       CCC    CCC" << endl;
	cout << "    CCC     CCC                CCC     CCC                                 CCC     CCC                CCC     CCC" << endl;
	cout << "    CCC     CCC                        CCC                                 CCC     CCC                        CCC" << endl;
	cout << "    CC                                  CC                                 CC                                  CC" << endl;
	cout << "    CC                C C               CC                                 CC                C C               CC" << endl;
	cout << "    CC                                  CC                                 CC                                  CC" << endl;
	cout << "    CC       CCCCCCCCCCCCCCCCCCCCCC     CC                                 CC       CCCCCCCCCCCCCCCCCCCCCC     CC" << endl;
	cout << "    CC             CCCCCCCC             CC                                 CC             CCCCCCCC             CC" << endl;
	cout << "      CC                              CC                                     CC                              CC" << endl;
	cout << "        CCC                        CCC                                         CCC                        CCC" << endl;
	cout << "          CCC                    CCC                                             CCC                    CCC" << endl;
	cout << "            CCC                 CCC                                                CCC                 CCC" << endl;
	cout << "               CCC           CCC                                                      CCC           CCC" << endl;
	cout << "                 CCCCCCCCCCCCC                                                          CCCCCCCCCCCCC" << endl;
	cout << " 	              CC                                                                     CC      " << endl;
	cout << " 	              CC								     CC      " << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;
	
	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}
	c1 = 0;
	c2 = 0;

	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	} else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void cvh() {
	system("cls");
	battle = 6;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                     " << player1_name << "                                                              " << player2_name << endl;
	cout << "                     Player 1                                                             Player 2" << endl;
	cout << "" << endl;
	cout << "                     Health: " << setprecision(2) << multihearts_player1 << "                                                            Health: " << setprecision(2) <<multihearts_player2 << endl;
	cout << " " << endl;
	cout << "              CCCCCCCCCCCCCCCCCCCC                                                   HHHHHHHHHHHHHHHHHH" << endl;
	cout << "          CCCCCCC              CCCCCC                                            HHHH                HHHHH" << endl;
	cout << "        CCCCCCC                   CCCCC                                        HHH                      HHH" << endl;
	cout << "       CCC                           CCC                                      H                           H" << endl;
	cout << "      CCC                             CCC                                   HHHHHHH                        H" << endl;
	cout << "     CCC                       CCC    CCC                                  H    HH H                        H" << endl;
	cout << "    CCC     CCC                CCC     CCC                                H     HH  H            HHHHHH     H" << endl;
	cout << "    CCC     CCC                        CCC                                H         H           H  HH  H    H" << endl;
	cout << "    CC                                  CC                                 H       H           H   HH   H   H" << endl;
	cout << "    CC                C C               CC                                  HHHHHHH            H        H   H" << endl;
	cout << "    CC                                  CC                                  H      HHHHHHHHH    H      H    H" << endl;
	cout << "    CC       CCCCCCCCCCCCCCCCCCCCCC     CC                                   H      H      H     HHHHHH     H" << endl;
	cout << "    CC             CCCCCCCC             CC                                    HHH    HHHHHHH               H" << endl;
	cout << "      CC                              CC                                        HHH                       H" << endl;
	cout << "        CCC                        CCC                                           HHHHHH               HHHH" << endl;
	cout << "          CCC                    CCC                                               H                  H" << endl;
	cout << "            CCC                 CCC                                        HHHHHHH  H       HHHH   H   H" << endl;
	cout << "               CCC           CCC                                          H   H  HHHH      H   HHHH     H" << endl;
	cout << "                 CCCCCCCCCCCCC                                            H   HH           H           HH" << endl;
	cout << " 	             CC                                                   H      HHHH      H      HHHHHH H" << endl;
	cout << " 	             CC						           HHHHHH            HHHHHH       H	" << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}
	c1 = 0;
	c2 = 0;

	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	} else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void hvb() {
	system("cls");
	battle = 7;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                " << player1_name << "                                                                         " << player2_name << endl;
	cout << "                Player 1                                                                        Player 2" << endl;
	cout << "" << endl;
	cout << "                Health: " << setprecision(2) << multihearts_player1 << "                                                                       Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "         HHHHHHHHHHHHHHHHHH                                                     BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB" << endl;
	cout << "      HHHHH               HHHH                                                BB                                        BB" << endl;
	cout << "     HHH                     HHH                                            BB                   BB                      BB" << endl;
	cout << "     H                          H                                           BB                   BB                      BB" << endl;
	cout << "    H                       HHHHHHH                                         BB                           BB        BB    BB" << endl;
	cout << "   H                       H    HH H                                        BB                           BB        BB    BB" << endl;
	cout << "   H     HHHHHH           H     HH  H                                       BB         BB                                BB" << endl;
	cout << "   H    H  HH  H          H         H                                    B  BB         BB      B             BB          BB" << endl;
	cout << "   H   H   HH   H          H       H                                    BBBBBB              BBBBB            BB          BB  BBBBBBB" << endl;
	cout << "   H   H        H           HHHHHHH                                    BBB BBB              BB BBB                       BB BBBB  BB" << endl;
	cout << "   H    H      H   HHHHHHHHH      H                                    BBB  BB             BB  BBB                BB     BBBBB  BBBB" << endl;
	cout << "   H     HHHHHH    H      H      H                                   BBBBB    BBBBBBBBBBBBB    BBBBB   BB         BB     BBBB  BBBB" << endl;
	cout << "    H              HHHHHHH    HHH                                    BBB   B              B      BBB   BB                BBB  BBBB" << endl;
	cout << "     H                      HHH                                      BBB   BB             BB     BBB                 BB  BBBBBBBBB" << endl;
	cout << "      HHHH              HHHHHH                                       BBB                         BBB           BB    BB  BBB" << endl;
	cout << "         H                 H                                          BB     BBBBBBBBBBBBBB    BB              BB        BB" << endl;
	cout << "        H    H   HHHH     H  HHHHHHH                                   BB                                              BBBBBB" << endl;
	cout << "       H     HHHH    H    HHHH  H   H                                   BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB" << endl;
	cout << "      HH             H    H    HH   H                                    BBBBBBBB     BBBBBBBBB         BBBBBBBBBBBBBBBBB    B" << endl;
	cout << "     H HHHHHHH       H    HHHH      H                                      BBBB       BBBBBBB             BBBBBB     BBBBBBBBB" << endl;
	cout << "     H        HHHHHHH     H   HHHHHH" << endl;
	cout << "     H                     H" << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}
	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	} else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void hvc() {
	system("cls");
	battle = 8;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "                " << player1_name << "                                                                " << player2_name << endl;
	cout << "                Player 1                                                               Player 2" << endl;
	cout << "" << endl;
	cout << "                Health: " << setprecision(2) << multihearts_player1 << "                                                              Health: " << setprecision(2) << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "         HHHHHHHHHHHHHHHHHH                                                     CCCCCCCCCCCCCCCCCCCC" << endl;
	cout << "      HHHHH               HHHH                                              CCCCCCC              CCCCCC" << endl;
	cout << "     HHH                     HHH                                          CCCCCCC                   CCCCC" << endl;
	cout << "     H                          H                                        CCC                           CCC" << endl;
	cout << "    H                       HHHHHHH                                     CCC                             CCC" << endl;
	cout << "   H                       H    HH H                                   CCC                       CCC    CCC" << endl;
	cout << "   H     HHHHHH           H     HH  H                                 CCC     CCC                CCC     CCC" << endl;
	cout << "   H    H  HH  H          H         H                                 CCC     CCC                        CCC" << endl;
	cout << "   H   H   HH   H          H       H                                  CC                                  CC" << endl;
	cout << "   H   H        H           HHHHHHH                                   CC                C C               CC" << endl;
	cout << "   H    H      H   HHHHHHHHH      H                                   CC                                  CC" << endl;
	cout << "   H     HHHHHH    H      H      H                                    CC                                  CC" << endl;
	cout << "    H              HHHHHHH    HHH                                     CC       CCCCCCCCCCCCCCCCCCCCCC     CC" << endl;
	cout << "     H                      HHH                                       CC             CCCCCCCC             CC" << endl;
	cout << "      HHHH              HHHHHH                                          CC                              CC" << endl;
	cout << "         H                 H                                              CCC                        CCC" << endl;
	cout << "        H    H   HHHH     H  HHHHHHH                                        CCC                    CCC" << endl;
	cout << "       H     HHHH    H    HHHH  H   H                                         CCC                 CCC" << endl;
	cout << "      HH             H    H    HH   H                                            CCC           CCC" << endl;
	cout << "     H HHHHHHH       H    HHHH      H                                              CCCCCCCCCCCCC" << endl;
	cout << "     H        HHHHHHH     H   HHHHHH                                                     CC" << endl;
	cout << "     H                     H                                                             CC" << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}
	c1 = 0;
	c2 = 0;

	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	} else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void hvh() {
	system("cls");
	battle = 9;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "               " << player1_name << "                                                                " << player2_name << endl;
	cout << "               Player 1                                                               Player 2" << endl;
	cout << "" << endl;
	cout << "               Health: " << setprecision(2) << multihearts_player1 << "                                                              Health: " << setprecision(2)  << multihearts_player2 << endl;
	cout << " " << endl;
	cout << "         HHHHHHHHHHHHHHHHHH                                                     HHHHHHHHHHHHHHHHHH" << endl;
	cout << "      HHHHH               HHHH                                              HHHH                HHHHH" << endl;
	cout << "     HHH                     HHH                                          HHH                      HHH" << endl;
	cout << "     H                          H                                        H                           H" << endl;
	cout << "    H                       HHHHHHH                                    HHHHHHH                        H" << endl;
	cout << "   H                       H    HH H                                  H    HH H                        H" << endl;
	cout << "   H     HHHHHH           H     HH  H                                H     HH  H            HHHHHH     H" << endl;
	cout << "   H    H  HH  H          H         H                                H         H           H  HH  H    H" << endl;
	cout << "   H   H   HH   H          H       H                                  H       H           H   HH   H   H" << endl;
	cout << "   H   H        H           HHHHHHH                                    HHHHHHH            H        H   H" << endl;
	cout << "   H    H      H   HHHHHHHHH      H                                    H      HHHHHHHHH    H      H    H" << endl;
	cout << "   H     HHHHHH    H      H      H                                      H      H      H     HHHHHH     H" << endl;
	cout << "    H              HHHHHHH    HHH                                        HHH    HHHHHHH               H" << endl;
	cout << "     H                      HHH                                            HHH                       H" << endl;
	cout << "      HHHH              HHHHHH                                              HHHHHH               HHHH" << endl;
	cout << "         H                 H                                                  H                  H" << endl;
	cout << "        H    H   HHHH     H  HHHHHHH                                  HHHHHHH  H       HHHH   H   H" << endl;
	cout << "       H     HHHH    H    HHHH  H   H                                H   H  HHHH      H   HHHH     H" << endl;
	cout << "      HH             H    H    HH   H                                H   HH           H           HH" << endl;
	cout << "     H HHHHHHH       H    HHHH      H                                H      HHHH      H      HHHHHH H" << endl;
	cout << "     H        HHHHHHH     H   HHHHHH                                  HHHHHH            HHHHHH       H	" << endl;
	cout << "     H                     H                                                  H                     H" << endl;
	cout << " " << endl;
	cout << "\t\t\t\t" << status_debuff_player1 << "\t\t\t\t\t\t\t\t\t\t\t\t" << status_debuff_player2 << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t" << status_play << endl;

	if (burned1 == true and burned2 == true) {
		multihearts_player1 -= 0.2f;
		multihearts_player2 -= 0.2f;
	}
	else if (burned1 == true) {
		multihearts_player2 -= 0.2f;
	}
	else if (burned2 == true) {
		multihearts_player1 -= 0.2f;
	}

	if (multihearts_player1 <= 0 or multihearts_player2 <= 0) {
		winner_declare_of_the_game();
	} else if (player1_winner == 0 and player2_winner == 0) {
		prompt_for_rps();
	} else if (player1_winner == 1) {
		prompt_for_player1();
	} else if (player2_winner == 1) {
		prompt_for_player2();
	}
}

void prompt_for_rps() {
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t Pick R for rock, P for paper, S for scissor" << endl;
	cout << "\t\t\t\t\t\tNote: Whoever wins will get the chance to answer the question first." << endl;
	cout << "\t\t\t\t\t\tIf you get the correct answer you will be able to choose the first move." << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t Press V to reveal question: ";
	cin >> bar;

	switch (bar) {
	case'V':
		questions();
	}
}

void prompt_for_player1() {
	cout << "" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << attack_name1 << endl;
	cout << "\t\t\t\t\t\t" << description1 << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << attack_name2 << endl;
	cout << "\t\t\t\t\t\t" << description2 << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << attack_name3 << endl;
	cout << "\t\t\t\t\t\t" << description3 << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
	cin >> player1_attack;

	switch (player1_attack) {
	case 'F':
		if (attack_name1 == "Fireball - Press F to cast") {
			fireball1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsfireball();
				break;
			case 'B':
				barrier2 = true;
				fireballvsbarrier();
				break;
			case 'H':
				heal2 = true;
				fireballvsheal();
				break;
			case 'S':
				spear2 = true;
				fireballvsspear();
				break;
			case 'M':
				mirror2 = true;
				fireballvsmirror();
				break;
			case 'C':
				chains2 = true;
				fireballvschains();
				break;
			case 'R':
				refine2 = true;
				fireballvsrefine();
				break;
			case 'D':
				door2 = true;
				fireballvsdoor();
				break;
			case 'E':
				execute2 = true;
				fireballvsexecute();
				break;
			case 'T':
				thunder2 = true;
				fireballvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Fireball - Press F to cast") {
			fireball1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsfireball();
				break;
			case 'B':
				barrier2 = true;
				fireballvsbarrier();
				break;
			case 'H':
				heal2 = true;
				fireballvsheal();
				break;
			case 'S':
				spear2 = true;
				fireballvsspear();
				break;
			case 'M':
				mirror2 = true;
				fireballvsmirror();
				break;
			case 'C':
				chains2 = true;
				fireballvschains();
				break;
			case 'R':
				refine2 = true;
				fireballvsrefine();
				break;
			case 'D':
				door2 = true;
				fireballvsdoor();
				break;
			case 'E':
				execute2 = true;
				fireballvsexecute();
				break;
			case 'T':
				thunder2 = true;
				fireballvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Fireball - Press F to cast") {
			fireball1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsfireball();
				break;
			case 'B':
				barrier2 = true;
				fireballvsbarrier();
				break;
			case 'H':
				heal2 = true;
				fireballvsheal();
				break;
			case 'S':
				spear2 = true;
				fireballvsspear();
				break;
			case 'M':
				mirror2 = true;
				fireballvsmirror();
				break;
			case 'C':
				chains2 = true;
				fireballvschains();
				break;
			case 'R':
				refine2 = true;
				fireballvsrefine();
				break;
			case 'D':
				door2 = true;
				fireballvsdoor();
				break;
			case 'E':
				execute2 = true;
				fireballvsexecute();
				break;
			case 'T':
				thunder2 = true;
				fireballvsthunder();
				break;
			}
		}
		break;
	case 'B':
		if (attack_name1 == "Barrier - Press B to cast") {
			barrier1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsbarrier();
				break;
			case 'B':
				barrier2 = true;
				barriervsbarrier();
				break;
			case 'H':
				heal2 = true;
				barriervsheal();
				break;
			case 'S':
				spear2 = true;
				barriervsspear();
				break;
			case 'M':
				mirror2 = true;
				barriervsmirror();
				break;
			case 'C':
				chains2 = true;
				barriervschains();
				break;
			case 'R':
				refine2 = true;
				barriervsrefine();
				break;
			case 'D':
				door2 = true;
				barriervsdoor();
				break;
			case 'E':
				execute2 = true;
				barriervsexecute();
				break;
			case 'T':
				thunder2 = true;
				barriervsthunder();
				break;
			}
		}
		else if (attack_name2 == "Barrier - Press B to cast") {
			barrier1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsbarrier();
				break;
			case 'B':
				barrier2 = true;
				barriervsbarrier();
				break;
			case 'H':
				heal2 = true;
				barriervsheal();
				break;
			case 'S':
				spear2 = true;
				barriervsspear();
				break;
			case 'M':
				mirror2 = true;
				barriervsmirror();
				break;
			case 'C':
				chains2 = true;
				barriervschains();
				break;
			case 'R':
				refine2 = true;
				barriervsrefine();
				break;
			case 'D':
				door2 = true;
				barriervsdoor();
				break;
			case 'E':
				execute2 = true;
				barriervsexecute();
				break;
			case 'T':
				thunder2 = true;
				barriervsthunder();
				break;
			}
		}
		else if (attack_name3 == "Barrier - Press B to cast") {
			barrier1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsbarrier();
				break;
			case 'B':
				barrier2 = true;
				barriervsbarrier();
				break;
			case 'H':
				heal2 = true;
				barriervsheal();
				break;
			case 'S':
				spear2 = true;
				barriervsspear();
				break;
			case 'M':
				mirror2 = true;
				barriervsmirror();
				break;
			case 'C':
				chains2 = true;
				barriervschains();
				break;
			case 'R':
				refine2 = true;
				barriervsrefine();
				break;
			case 'D':
				door2 = true;
				barriervsdoor();
				break;
			case 'E':
				execute2 = true;
				barriervsexecute();
				break;
			case 'T':
				thunder2 = true;
				barriervsthunder();
				break;
			}
		}
		break;
	case 'H':
		if (attack_name1 == "Heal - Press H to cast") {
			heal1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsheal();
				break;
			case 'B':
				barrier2 = true;
				barriervsheal();
				break;
			case 'H':
				heal2 = true;
				healvsheal();
				break;
			case 'S':
				spear2 = true;
				healvsspear();
				break;
			case 'M':
				mirror2 = true;
				healvsmirror();
				break;
			case 'C':
				chains2 = true;
				healvschains();
				break;
			case 'R':
				refine2 = true;
				healvsrefine();
				break;
			case 'D':
				door2 = true;
				healvsdoor();
				break;
			case 'E':
				execute2 = true;
				healvsexecute();
				break;
			case 'T':
				thunder2 = true;
				healvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Heal - Press H to cast") {
			heal1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsheal();
				break;
			case 'B':
				barrier2 = true;
				barriervsheal();
				break;
			case 'H':
				heal2 = true;
				healvsheal();
				break;
			case 'S':
				spear2 = true;
				healvsspear();
				break;
			case 'M':
				mirror2 = true;
				healvsmirror();
				break;
			case 'C':
				chains2 = true;
				healvschains();
				break;
			case 'R':
				refine2 = true;
				healvsrefine();
				break;
			case 'D':
				door2 = true;
				healvsdoor();
				break;
			case 'E':
				execute2 = true;
				healvsexecute();
				break;
			case 'T':
				thunder2 = true;
				healvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Heal - Press H to cast") {
			heal1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsheal();
				break;
			case 'B':
				barrier2 = true;
				barriervsheal();
				break;
			case 'H':
				heal2 = true;
				healvsheal();
				break;
			case 'S':
				spear2 = true;
				healvsspear();
				break;
			case 'M':
				mirror2 = true;
				healvsmirror();
				break;
			case 'C':
				chains2 = true;
				healvschains();
				break;
			case 'R':
				refine2 = true;
				healvsrefine();
				break;
			case 'D':
				door2 = true;
				healvsdoor();
				break;
			case 'E':
				execute2 = true;
				healvsexecute();
				break;
			case 'T':
				thunder2 = true;
				healvsthunder();
				break;
			}
		}
		break;
	case 'S':
		if (attack_name1 == "Spear - Press S to cast") {
			spear1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsspear();
				break;
			case 'B':
				barrier2 = true;
				barriervsspear();
				break;
			case 'H':
				heal2 = true;
				healvsspear();
				break;
			case 'S':
				spear2 = true;
				spearvsspear();
				break;
			case 'M':
				mirror2 = true;
				spearvsmirror();
				break;
			case 'C':
				chains2 = true;
				spearvschains();
				break;
			case 'R':
				refine2 = true;
				spearvsrefine();
				break;
			case 'D':
				door2 = true;
				spearvsdoor();
				break;
			case 'E':
				execute2 = true;
				spearvsexecute();
				break;
			case 'T':
				thunder2 = true;
				spearvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Spear - Press S to cast") {
			spear1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsspear();
				break;
			case 'B':
				barrier2 = true;
				barriervsspear();
				break;
			case 'H':
				heal2 = true;
				healvsspear();
				break;
			case 'S':
				spear2 = true;
				spearvsspear();
				break;
			case 'M':
				mirror2 = true;
				spearvsmirror();
				break;
			case 'C':
				chains2 = true;
				spearvschains();
				break;
			case 'R':
				refine2 = true;
				spearvsrefine();
				break;
			case 'D':
				door2 = true;
				spearvsdoor();
				break;
			case 'E':
				execute2 = true;
				spearvsexecute();
				break;
			case 'T':
				thunder2 = true;
				spearvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Spear - Press S to cast") {
			spear1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsspear();
				break;
			case 'B':
				barrier2 = true;
				barriervsspear();
				break;
			case 'H':
				heal2 = true;
				barriervsheal();
				break;
			case 'S':
				spear2 = true;
				spearvsspear();
				break;
			case 'M':
				mirror2 = true;
				spearvsmirror();
				break;
			case 'C':
				chains2 = true;
				spearvschains();
				break;
			case 'R':
				refine2 = true;
				spearvsrefine();
				break;
			case 'D':
				door2 = true;
				spearvsdoor();
				break;
			case 'E':
				execute2 = true;
				spearvsexecute();
				break;
			case 'T':
				thunder2 = true;
				spearvsthunder();
				break;
			}
		}
		break;
	case 'M':
		if (attack_name1 == "Mirror - Press M to cast") {
			mirror1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsmirror();
				break;
			case 'B':
				barrier2 = true;
				barriervsmirror();
				break;
			case 'H':
				heal2 = true;
				healvsmirror();
				break;
			case 'S':
				spear2 = true;
				spearvsmirror();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsmirror();
				break;
			case 'C':
				chains2 = true;
				mirrorvschains();
				break;
			case 'R':
				refine2 = true;
				mirrorvsrefine();
				break;
			case 'D':
				door2 = true;
				mirrorvsdoor();
				break;
			case 'E':
				execute2 = true;
				mirrorvsexecute();
				break;
			case 'T':
				thunder2 = true;
				mirrorvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Mirror - Press M to cast") {
			mirror1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsmirror();
				break;
			case 'B':
				barrier2 = true;
				barriervsmirror();
				break;
			case 'H':
				heal2 = true;
				healvsmirror();
				break;
			case 'S':
				spear2 = true;
				spearvsmirror();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsmirror();
				break;
			case 'C':
				chains2 = true;
				mirrorvschains();
				break;
			case 'R':
				refine2 = true;
				mirrorvsrefine();
				break;
			case 'D':
				door2 = true;
				mirrorvsdoor();
				break;
			case 'E':
				execute2 = true;
				mirrorvsexecute();
				break;
			case 'T':
				thunder2 = true;
				mirrorvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Mirror - Press M to cast") {
			mirror1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsmirror();
				break;
			case 'B':
				barrier2 = true;
				barriervsmirror();
				break;
			case 'H':
				heal2 = true;
				healvsmirror();
				break;
			case 'S':
				spear2 = true;
				spearvsmirror();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsmirror();
				break;
			case 'C':
				chains2 = true;
				mirrorvschains();
				break;
			case 'R':
				refine2 = true;
				mirrorvsrefine();
				break;
			case 'D':
				door2 = true;
				mirrorvsdoor();
				break;
			case 'E':
				execute2 = true;
				mirrorvsexecute();
				break;
			case 'T':
				thunder2 = true;
				mirrorvsthunder();
				break;
			}
		}
		break;
	case 'C':
		if (attack_name1 == "Chains - Press C to cast") {
			chains1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvschains();
				break;
			case 'B':
				barrier2 = true;
				barriervschains();
				break;
			case 'H':
				heal2 = true;
				healvschains();
				break;
			case 'S':
				spear2 = true;
				spearvschains();
				break;
			case 'M':
				mirror2 = true;
				mirrorvschains();
				break;
			case 'C':
				chains2 = true;
				chainsvschains();
				break;
			case 'R':
				refine2 = true;
				chainsvsrefine();
				break;
			case 'D':
				door2 = true;
				chainsvsdoor();
				break;
			case 'E':
				execute2 = true;
				chainsvsexecute();
				break;
			case 'T':
				thunder2 = true;
				chainsvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Chains - Press C to cast") {
			chains1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvschains();
				break;
			case 'B':
				barrier2 = true;
				barriervschains();
				break;
			case 'H':
				heal2 = true;
				healvschains();
				break;
			case 'S':
				spear2 = true;
				spearvschains();
				break;
			case 'M':
				mirror2 = true;
				mirrorvschains();
				break;
			case 'C':
				chains2 = true;
				chainsvschains();
				break;
			case 'R':
				refine2 = true;
				chainsvsrefine();
				break;
			case 'D':
				door2 = true;
				chainsvsdoor();
				break;
			case 'E':
				execute2 = true;
				chainsvsexecute();
				break;
			case 'T':
				thunder2 = true;
				chainsvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Chains - Press C to cast") {
			chains1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvschains();
				break;
			case 'B':
				barrier2 = true;
				barriervschains();
				break;
			case 'H':
				heal2 = true;
				healvschains();
				break;
			case 'S':
				spear2 = true;
				spearvschains();
				break;
			case 'M':
				mirror2 = true;
				mirrorvschains();
				break;
			case 'C':
				chains2 = true;
				chainsvschains();
				break;
			case 'R':
				refine2 = true;
				chainsvsrefine();
				break;
			case 'D':
				door2 = true;
				chainsvsdoor();
				break;
			case 'E':
				execute2 = true;
				chainsvsexecute();
				break;
			case 'T':
				thunder2 = true;
				chainsvsthunder();
				break;
			}
		}
		break;
	case 'R':
		if (attack_name1 == "Refine - Press R to cast") {
			refine1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsrefine();
				break;
			case 'B':
				barrier2 = true;
				barriervsrefine();
				break;
			case 'H':
				heal2 = true;
				healvsrefine();
				break;
			case 'S':
				spear2 = true;
				spearvsrefine();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsrefine();
				break;
			case 'C':
				chains2 = true;
				chainsvsrefine();
				break;
			case 'R':
				refine2 = true;
				refinevsrefine();
				break;
			case 'D':
				door2 = true;
				refinevsdoor();
				break;
			case 'E':
				execute2 = true;
				refinevsexecute();
				break;
			case 'T':
				thunder2 = true;
				refinevsthunder();
				break;
			}
		}
		else if (attack_name2 == "Refine - Press R to cast") {
			refine1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsrefine();
				break;
			case 'B':
				barrier2 = true;
				barriervsrefine();
				break;
			case 'H':
				heal2 = true;
				healvsrefine();
				break;
			case 'S':
				spear2 = true;
				spearvsrefine();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsrefine();
				break;
			case 'C':
				chains2 = true;
				chainsvsrefine();
				break;
			case 'R':
				refine2 = true;
				refinevsrefine();
				break;
			case 'D':
				door2 = true;
				refinevsdoor();
				break;
			case 'E':
				execute2 = true;
				refinevsexecute();
				break;
			case 'T':
				thunder2 = true;
				refinevsthunder();
				break;
			}
		}
		else if (attack_name3 == "Refine - Press R to cast") {
			refine1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsrefine();
				break;
			case 'B':
				barrier2 = true;
				barriervsrefine();
				break;
			case 'H':
				heal2 = true;
				healvsrefine();
				break;
			case 'S':
				spear2 = true;
				spearvsrefine();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsrefine();
				break;
			case 'C':
				chains2 = true;
				chainsvsrefine();
				break;
			case 'R':
				refine2 = true;
				refinevsrefine();
				break;
			case 'D':
				door2 = true;
				refinevsdoor();
				break;
			case 'E':
				execute2 = true;
				refinevsexecute();
				break;
			case 'T':
				thunder2 = true;
				refinevsthunder();
				break;
			}
		}
		break;
	case 'D':
		if (attack_name1 == "Door - Press D to cast") {
			door1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsdoor();
				break;
			case 'B':
				barrier2 = true;
				barriervsdoor();
				break;
			case 'H':
				heal2 = true;
				healvsdoor();
				break;
			case 'S':
				spear2 = true;
				spearvsdoor();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsdoor();
				break;
			case 'C':
				chains2 = true;
				chainsvsdoor();
				break;
			case 'R':
				refine2 = true;
				refinevsdoor();
				break;
			case 'D':
				door2 = true;
				doorvsdoor();
				break;
			case 'E':
				execute2 = true;
				doorvsexecute();
				break;
			case 'T':
				thunder2 = true;
				doorvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Door - Press D to cast") {
			door1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsdoor();
				break;
			case 'B':
				barrier2 = true;
				barriervsdoor();
				break;
			case 'H':
				heal2 = true;
				healvsdoor();
				break;
			case 'S':
				spear2 = true;
				spearvsdoor();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsdoor();
				break;
			case 'C':
				chains2 = true;
				chainsvsdoor();
				break;
			case 'R':
				refine2 = true;
				refinevsdoor();
				break;
			case 'D':
				door2 = true;
				doorvsdoor();
				break;
			case 'E':
				execute2 = true;
				doorvsexecute();
				break;
			case 'T':
				thunder2 = true;
				doorvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Door - Press D to cast") {
			door1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsdoor();
				break;
			case 'B':
				barrier2 = true;
				barriervsdoor();
				break;
			case 'H':
				heal2 = true;
				healvsdoor();
				break;
			case 'S':
				spear2 = true;
				spearvsdoor();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsdoor();
				break;
			case 'C':
				chains2 = true;
				chainsvsdoor();
				break;
			case 'R':
				refine2 = true;
				refinevsdoor();
				break;
			case 'D':
				door2 = true;
				doorvsdoor();
				break;
			case 'E':
				execute2 = true;
				doorvsexecute();
				break;
			case 'T':
				thunder2 = true;
				doorvsthunder();
				break;
			}
		}
		break;
	case 'E':
		if (attack_name1 == "Execute - Press E to cast") {
			execute1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsexecute();
				break;
			case 'B':
				barrier2 = true;
				barriervsexecute();
				break;
			case 'H':
				heal2 = true;
				healvsexecute();
				break;
			case 'S':
				spear2 = true;
				spearvsexecute();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsexecute();
				break;
			case 'C':
				chains2 = true;
				chainsvsexecute();
				break;
			case 'R':
				refine2 = true;
				refinevsexecute();
				break;
			case 'D':
				door2 = true;
				doorvsexecute();
				break;
			case 'E':
				execute2 = true;
				executevsexecute();
				break;
			case 'T':
				thunder2 = true;
				executevsthunder();
				break;
			}
		}
		else if (attack_name2 == "Execute - Press E to cast") {
			execute1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsexecute();
				break;
			case 'B':
				barrier2 = true;
				barriervsexecute();
				break;
			case 'H':
				heal2 = true;
				healvsexecute();
				break;
			case 'S':
				spear2 = true;
				spearvsexecute();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsexecute();
				break;
			case 'C':
				chains2 = true;
				chainsvsexecute();
				break;
			case 'R':
				refine2 = true;
				refinevsexecute();
				break;
			case 'D':
				door2 = true;
				doorvsexecute();
				break;
			case 'E':
				execute2 = true;
				executevsexecute();
				break;
			case 'T':
				thunder2 = true;
				executevsthunder();
				break;
			}
		}
		else if (attack_name3 == "Execute - Press E to cast") {
			execute1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsexecute();
				break;
			case 'B':
				barrier2 = true;
				barriervsexecute();
				break;
			case 'H':
				heal2 = true;
				healvsexecute();
				break;
			case 'S':
				spear2 = true;
				spearvsexecute();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsexecute();
				break;
			case 'C':
				chains2 = true;
				chainsvsexecute();
				break;
			case 'R':
				refine2 = true;
				refinevsexecute();
				break;
			case 'D':
				door2 = true;
				doorvsexecute();
				break;
			case 'E':
				execute2 = true;
				executevsexecute();
				break;
			case 'T':
				thunder2 = true;
				executevsthunder();
				break;
			}
		}
		break;
	case 'T':
		if (attack_name1 == "Thunder - Press T to cast") {
			thunder1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsthunder();
				break;
			case 'B':
				barrier2 = true;
				barriervsthunder();
				break;
			case 'H':
				heal2 = true;
				healvsthunder();
				break;
			case 'S':
				spear2 = true;
				spearvsthunder();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsthunder();
				break;
			case 'C':
				chains2 = true;
				chainsvsthunder();
				break;
			case 'R':
				refine2 = true;
				refinevsthunder();
				break;
			case 'D':
				door2 = true;
				doorvsthunder();
				break;
			case 'E':
				execute2 = true;
				executevsthunder();
				break;
			case 'T':
				thunder2 = true;
				thundervsthunder();
				break;
			}
		}
		else if (attack_name2 == "Thunder - Press T to cast") {
			thunder1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsthunder();
				break;
			case 'B':
				barrier2 = true;
				barriervsthunder();
				break;
			case 'H':
				heal2 = true;
				healvsthunder();
				break;
			case 'S':
				spear2 = true;
				spearvsthunder();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsthunder();
				break;
			case 'C':
				chains2 = true;
				chainsvsthunder();
				break;
			case 'R':
				refine2 = true;
				refinevsthunder();
				break;
			case 'D':
				door2 = true;
				doorvsthunder();
				break;
			case 'E':
				execute2 = true;
				executevsthunder();
				break;
			case 'T':
				thunder2 = true;
				thundervsthunder();
				break;
			}
		}
		else if (attack_name3 == "Thunder - Press T to cast") {
			thunder1 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
			cin >> player2_attack;
			switch (player2_attack) {
			case 'F':
				fireball2 = true;
				fireballvsthunder();
				break;
			case 'B':
				barrier2 = true;
				barriervsthunder();
				break;
			case 'H':
				heal2 = true;
				healvsthunder();
				break;
			case 'S':
				spear2 = true;
				spearvsthunder();
				break;
			case 'M':
				mirror2 = true;
				mirrorvsthunder();
				break;
			case 'C':
				chains2 = true;
				chainsvsthunder();
				break;
			case 'R':
				refine2 = true;
				refinevsthunder();
				break;
			case 'D':
				door2 = true;
				doorvsthunder();
				break;
			case 'E':
				execute2 = true;
				executevsthunder();
				break;
			case 'T':
				thunder2 = true;
				thundervsthunder();
				break;
			}
		}
		break;
	}
}

void prompt_for_player2() {
	cout << "" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << attack_name1 << endl;
	cout << "\t\t\t\t\t\t" << description1 << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << attack_name2 << endl;
	cout << "\t\t\t\t\t\t" << description2 << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << attack_name3 << endl;
	cout << "\t\t\t\t\t\t" << description3 << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t" << player2_name << " (Player2) what's your next move? ";
	cin >> player2_attack;

	switch (player2_attack) {
	case 'F':
		if (attack_name1 == "Fireball - Press F to cast") {
			fireball2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player2) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsfireball();
				break;
			case 'B':
				barrier1 = true;
				fireballvsbarrier();
				break;
			case 'H':
				heal1 = true;
				fireballvsheal();
				break;
			case 'S':
				spear1 = true;
				fireballvsspear();
				break;
			case 'M':
				mirror1 = true;
				fireballvsmirror();
				break;
			case 'C':
				chains1 = true;
				fireballvschains();
				break;
			case 'R':
				refine1 = true;
				fireballvsrefine();
				break;
			case 'D':
				door1 = true;
				fireballvsdoor();
				break;
			case 'E':
				execute1 = true;
				fireballvsexecute();
				break;
			case 'T':
				thunder1 = true;
				fireballvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Fireball - Press F to cast") {
			fireball2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsfireball();
				break;
			case 'B':
				barrier1 = true;
				fireballvsbarrier();
				break;
			case 'H':
				heal1 = true;
				fireballvsheal();
				break;
			case 'S':
				spear1 = true;
				fireballvsspear();
				break;
			case 'M':
				mirror1 = true;
				fireballvsmirror();
				break;
			case 'C':
				chains1 = true;
				fireballvschains();
				break;
			case 'R':
				refine1 = true;
				fireballvsrefine();
				break;
			case 'D':
				door1 = true;
				fireballvsdoor();
				break;
			case 'E':
				execute1 = true;
				fireballvsexecute();
				break;
			case 'T':
				thunder1 = true;
				fireballvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Fireball - Press F to cast") {
			fireball2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsfireball();
				break;
			case 'B':
				barrier1 = true;
				fireballvsbarrier();
				break;
			case 'H':
				heal1 = true;
				fireballvsheal();
				break;
			case 'S':
				spear1 = true;
				fireballvsspear();
				break;
			case 'M':
				mirror1 = true;
				fireballvsmirror();
				break;
			case 'C':
				chains1 = true;
				fireballvschains();
				break;
			case 'R':
				refine1 = true;
				fireballvsrefine();
				break;
			case 'D':
				door1 = true;
				fireballvsdoor();
				break;
			case 'E':
				execute1 = true;
				fireballvsexecute();
				break;
			case 'T':
				thunder1 = true;
				fireballvsthunder();
				break;
			}
		}
		break;
	case 'B':
		if (attack_name1 == "Barrier - Press B to cast") {
			barrier2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsbarrier();
				break;
			case 'B':
				barrier1 = true;
				barriervsbarrier();
				break;
			case 'H':
				heal1 = true;
				barriervsheal();
				break;
			case 'S':
				spear1 = true;
				barriervsspear();
				break;
			case 'M':
				mirror1 = true;
				barriervsmirror();
				break;
			case 'C':
				chains1 = true;
				barriervschains();
				break;
			case 'R':
				refine1 = true;
				barriervsrefine();
				break;
			case 'D':
				door1 = true;
				barriervsdoor();
				break;
			case 'E':
				execute1 = true;
				barriervsexecute();
				break;
			case 'T':
				thunder1 = true;
				barriervsthunder();
				break;
			}
		}
		else if (attack_name2 == "Barrier - Press B to cast") {
			barrier2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsbarrier();
				break;
			case 'B':
				barrier1 = true;
				barriervsbarrier();
				break;
			case 'H':
				heal1 = true;
				barriervsheal();
				break;
			case 'S':
				spear1 = true;
				barriervsspear();
				break;
			case 'M':
				mirror1 = true;
				barriervsmirror();
				break;
			case 'C':
				chains1 = true;
				barriervschains();
				break;
			case 'R':
				refine1 = true;
				barriervsrefine();
				break;
			case 'D':
				door1 = true;
				barriervsdoor();
				break;
			case 'E':
				execute1 = true;
				barriervsexecute();
				break;
			case 'T':
				thunder1 = true;
				barriervsthunder();
				break;
			}
		}
		else if (attack_name3 == "Barrier - Press B to cast") {
			barrier2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsbarrier();
				break;
			case 'B':
				barrier1 = true;
				barriervsbarrier();
				break;
			case 'H':
				heal1 = true;
				barriervsheal();
				break;
			case 'S':
				spear1 = true;
				barriervsspear();
				break;
			case 'M':
				mirror1 = true;
				barriervsmirror();
				break;
			case 'C':
				chains1 = true;
				barriervschains();
				break;
			case 'R':
				refine1 = true;
				barriervsrefine();
				break;
			case 'D':
				door1 = true;
				barriervsdoor();
				break;
			case 'E':
				execute1 = true;
				barriervsexecute();
				break;
			case 'T':
				thunder1 = true;
				barriervsthunder();
				break;
			}
		}
		break;
	case 'H':
		if (attack_name1 == "Heal - Press H to cast") {
			heal2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsheal();
				break;
			case 'B':
				barrier1 = true;
				barriervsheal();
				break;
			case 'H':
				heal1 = true;
				healvsheal();
				break;
			case 'S':
				spear1 = true;
				healvsspear();
				break;
			case 'M':
				mirror1 = true;
				healvsmirror();
				break;
			case 'C':
				chains1 = true;
				healvschains();
				break;
			case 'R':
				refine1 = true;
				healvsrefine();
				break;
			case 'D':
				door1 = true;
				healvsdoor();
				break;
			case 'E':
				execute1 = true;
				healvsexecute();
				break;
			case 'T':
				thunder1 = true;
				healvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Heal - Press H to cast") {
			heal2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsheal();
				break;
			case 'B':
				barrier1 = true;
				barriervsheal();
				break;
			case 'H':
				heal1 = true;
				healvsheal();
				break;
			case 'S':
				spear1 = true;
				healvsspear();
				break;
			case 'M':
				mirror1 = true;
				healvsmirror();
				break;
			case 'C':
				chains1 = true;
				healvschains();
				break;
			case 'R':
				refine1 = true;
				healvsrefine();
				break;
			case 'D':
				door1 = true;
				healvsdoor();
				break;
			case 'E':
				execute1 = true;
				healvsexecute();
				break;
			case 'T':
				thunder1 = true;
				healvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Heal - Press H to cast") {
			heal2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsheal();
				break;
			case 'B':
				barrier1 = true;
				barriervsheal();
				break;
			case 'H':
				heal1 = true;
				healvsheal();
				break;
			case 'S':
				spear1 = true;
				healvsspear();
				break;
			case 'M':
				mirror1 = true;
				healvsmirror();
				break;
			case 'C':
				chains1 = true;
				healvschains();
				break;
			case 'R':
				refine1 = true;
				healvsrefine();
				break;
			case 'D':
				door1 = true;
				healvsdoor();
				break;
			case 'E':
				execute1 = true;
				healvsexecute();
				break;
			case 'T':
				thunder1 = true;
				healvsthunder();
				break;
			}
		}
		break;
	case 'S':
		if (attack_name1 == "Spear - Press S to cast") {
			spear2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsspear();
				break;
			case 'B':
				barrier1 = true;
				barriervsspear();
				break;
			case 'H':
				heal1 = true;
				healvsspear();
				break;
			case 'S':
				spear1 = true;
				spearvsspear();
				break;
			case 'M':
				mirror1 = true;
				spearvsmirror();
				break;
			case 'C':
				chains1 = true;
				spearvschains();
				break;
			case 'R':
				refine1 = true;
				spearvsrefine();
				break;
			case 'D':
				door1 = true;
				spearvsdoor();
				break;
			case 'E':
				execute1 = true;
				spearvsexecute();
				break;
			case 'T':
				thunder1 = true;
				spearvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Spear - Press S to cast") {
			spear2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player2) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsspear();
				break;
			case 'B':
				barrier1 = true;
				barriervsspear();
				break;
			case 'H':
				heal1 = true;
				healvsspear();
				break;
			case 'S':
				spear1 = true;
				spearvsspear();
				break;
			case 'M':
				mirror1 = true;
				spearvsmirror();
				break;
			case 'C':
				chains1 = true;
				spearvschains();
				break;
			case 'R':
				refine1 = true;
				spearvsrefine();
				break;
			case 'D':
				door1 = true;
				spearvsdoor();
				break;
			case 'E':
				execute1 = true;
				spearvsexecute();
				break;
			case 'T':
				thunder1 = true;
				spearvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Spear - Press S to cast") {
			spear2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsspear();
				break;
			case 'B':
				barrier1 = true;
				barriervsspear();
				break;
			case 'H':
				heal1 = true;
				barriervsheal();
				break;
			case 'S':
				spear1 = true;
				spearvsspear();
				break;
			case 'M':
				mirror1 = true;
				spearvsmirror();
				break;
			case 'C':
				chains1 = true;
				spearvschains();
				break;
			case 'R':
				refine1 = true;
				spearvsrefine();
				break;
			case 'D':
				door1 = true;
				spearvsdoor();
				break;
			case 'E':
				execute1 = true;
				spearvsexecute();
				break;
			case 'T':
				thunder1 = true;
				spearvsthunder();
				break;
			}
		}
		break;
	case 'M':
		if (attack_name1 == "Mirror - Press M to cast") {
			mirror2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsmirror();
				break;
			case 'B':
				barrier1 = true;
				barriervsmirror();
				break;
			case 'H':
				heal1 = true;
				healvsmirror();
				break;
			case 'S':
				spear1 = true;
				spearvsmirror();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsmirror();
				break;
			case 'C':
				chains1 = true;
				mirrorvschains();
				break;
			case 'R':
				refine1 = true;
				mirrorvsrefine();
				break;
			case 'D':
				door1 = true;
				mirrorvsdoor();
				break;
			case 'E':
				execute1 = true;
				mirrorvsexecute();
				break;
			case 'T':
				thunder1 = true;
				mirrorvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Mirror - Press M to cast") {
			mirror2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsmirror();
				break;
			case 'B':
				barrier1 = true;
				barriervsmirror();
				break;
			case 'H':
				heal1 = true;
				healvsmirror();
				break;
			case 'S':
				spear1 = true;
				spearvsmirror();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsmirror();
				break;
			case 'C':
				chains1 = true;
				mirrorvschains();
				break;
			case 'R':
				refine1 = true;
				mirrorvsrefine();
				break;
			case 'D':
				door1 = true;
				mirrorvsdoor();
				break;
			case 'E':
				execute1 = true;
				mirrorvsexecute();
				break;
			case 'T':
				thunder1 = true;
				mirrorvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Mirror - Press M to cast") {
			mirror2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsmirror();
				break;
			case 'B':
				barrier1 = true;
				barriervsmirror();
				break;
			case 'H':
				heal1 = true;
				healvsmirror();
				break;
			case 'S':
				spear1 = true;
				spearvsmirror();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsmirror();
				break;
			case 'C':
				chains1 = true;
				mirrorvschains();
				break;
			case 'R':
				refine1 = true;
				mirrorvsrefine();
				break;
			case 'D':
				door1 = true;
				mirrorvsdoor();
				break;
			case 'E':
				execute1 = true;
				mirrorvsexecute();
				break;
			case 'T':
				thunder1 = true;
				mirrorvsthunder();
				break;
			}
		}
		break;
		case 'C':
		if (attack_name1 == "Chains - Press C to cast") {
			chains2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvschains();
				break;
			case 'B':
				barrier1 = true;
				barriervschains();
				break;
			case 'H':
				heal1 = true;
				healvschains();
				break;
			case 'S':
				spear1 = true;
				spearvschains();
				break;
			case 'M':
				mirror1 = true;
				mirrorvschains();
				break;
			case 'C':
				chains1 = true;
				chainsvschains();
				break;
			case 'R':
				refine1 = true;
				chainsvsrefine();
				break;
			case 'D':
				door1 = true;
				chainsvsdoor();
				break;
			case 'E':
				execute1 = true;
				chainsvsexecute();
				break;
			case 'T':
				thunder1 = true;
				chainsvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Chains - Press C to cast") {
			chains2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvschains();
				break;
			case 'B':
				barrier1 = true;
				barriervschains();
				break;
			case 'H':
				heal1 = true;
				healvschains();
				break;
			case 'S':
				spear1 = true;
				spearvschains();
				break;
			case 'M':
				mirror1 = true;
				mirrorvschains();
				break;
			case 'C':
				chains1 = true;
				chainsvschains();
				break;
			case 'R':
				refine1 = true;
				chainsvsrefine();
				break;
			case 'D':
				door1 = true;
				chainsvsdoor();
				break;
			case 'E':
				execute1 = true;
				chainsvsexecute();
				break;
			case 'T':
				thunder1 = true;
				chainsvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Chains - Press C to cast") {
			chains2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvschains();
				break;
			case 'B':
				barrier1 = true;
				barriervschains();
				break;
			case 'H':
				heal1 = true;
				healvschains();
				break;
			case 'S':
				spear1 = true;
				spearvschains();
				break;
			case 'M':
				mirror1 = true;
				mirrorvschains();
				break;
			case 'C':
				chains1 = true;
				chainsvschains();
				break;
			case 'R':
				refine1 = true;
				chainsvsrefine();
				break;
			case 'D':
				door1 = true;
				chainsvsdoor();
				break;
			case 'E':
				execute1 = true;
				chainsvsexecute();
				break;
			case 'T':
				thunder1 = true;
				chainsvsthunder();
				break;
			}
		}
		break;
	case 'R':
		if (attack_name1 == "Refine - Press R to cast") {
			refine2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsrefine();
				break;
			case 'B':
				barrier1 = true;
				barriervsrefine();
				break;
			case 'H':
				heal1 = true;
				healvsrefine();
				break;
			case 'S':
				spear1 = true;
				spearvsrefine();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsrefine();
				break;
			case 'C':
				chains1 = true;
				chainsvsrefine();
				break;
			case 'R':
				refine1 = true;
				refinevsrefine();
				break;
			case 'D':
				door1 = true;
				refinevsdoor();
				break;
			case 'E':
				execute1 = true;
				refinevsexecute();
				break;
			case 'T':
				thunder1 = true;
				refinevsthunder();
				break;
			}
		}
		else if (attack_name2 == "Refine - Press R to cast") {
			refine2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsrefine();
				break;
			case 'B':
				barrier1 = true;
				barriervsrefine();
				break;
			case 'H':
				heal1 = true;
				healvsrefine();
				break;
			case 'S':
				spear1 = true;
				spearvsrefine();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsrefine();
				break;
			case 'C':
				chains1 = true;
				chainsvsrefine();
				break;
			case 'R':
				refine1 = true;
				refinevsrefine();
				break;
			case 'D':
				door1 = true;
				refinevsdoor();
				break;
			case 'E':
				execute1 = true;
				refinevsexecute();
				break;
			case 'T':
				thunder1 = true;
				refinevsthunder();
				break;
			}
		}
		else if (attack_name3 == "Refine - Press R to cast") {
			refine2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsrefine();
				break;
			case 'B':
				barrier1 = true;
				barriervsrefine();
				break;
			case 'H':
				heal1 = true;
				healvsrefine();
				break;
			case 'S':
				spear1 = true;
				spearvsrefine();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsrefine();
				break;
			case 'C':
				chains1 = true;
				chainsvsrefine();
				break;
			case 'R':
				refine1 = true;
				refinevsrefine();
				break;
			case 'D':
				door1 = true;
				refinevsdoor();
				break;
			case 'E':
				execute1 = true;
				refinevsexecute();
				break;
			case 'T':
				thunder1 = true;
				refinevsthunder();
				break;
			}
		}
		break;
	case 'D':
		if (attack_name1 == "Door - Press D to cast") {
			door2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsdoor();
				break;
			case 'B':
				barrier1 = true;
				barriervsdoor();
				break;
			case 'H':
				heal1 = true;
				healvsdoor();
				break;
			case 'S':
				spear1 = true;
				spearvsdoor();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsdoor();
				break;
			case 'C':
				chains1 = true;
				chainsvsdoor();
				break;
			case 'R':
				refine1 = true;
				refinevsdoor();
				break;
			case 'D':
				door1 = true;
				doorvsdoor();
				break;
			case 'E':
				execute1 = true;
				doorvsexecute();
				break;
			case 'T':
				thunder1 = true;
				doorvsthunder();
				break;
			}
		}
		else if (attack_name2 == "Door - Press D to cast") {
			door2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsdoor();
				break;
			case 'B':
				barrier1 = true;
				barriervsdoor();
				break;
			case 'H':
				heal1 = true;
				healvsdoor();
				break;
			case 'S':
				spear1 = true;
				spearvsdoor();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsdoor();
				break;
			case 'C':
				chains1 = true;
				chainsvsdoor();
				break;
			case 'R':
				refine1 = true;
				refinevsdoor();
				break;
			case 'D':
				door1 = true;
				doorvsdoor();
				break;
			case 'E':
				execute1 = true;
				doorvsexecute();
				break;
			case 'T':
				thunder1 = true;
				doorvsthunder();
				break;
			}
		}
		else if (attack_name3 == "Door - Press D to cast") {
			door2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsdoor();
				break;
			case 'B':
				barrier1 = true;
				barriervsdoor();
				break;
			case 'H':
				heal1 = true;
				healvsdoor();
				break;
			case 'S':
				spear1 = true;
				spearvsdoor();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsdoor();
				break;
			case 'C':
				chains1 = true;
				chainsvsdoor();
				break;
			case 'R':
				refine1 = true;
				refinevsdoor();
				break;
			case 'D':
				door1 = true;
				doorvsdoor();
				break;
			case 'E':
				execute1 = true;
				doorvsexecute();
				break;
			case 'T':
				thunder1 = true;
				doorvsthunder();
				break;
			}
		}
		break;
	case 'E':
		if (attack_name1 == "Execute - Press E to cast") {
			execute2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsexecute();
				break;
			case 'B':
				barrier1 = true;
				barriervsexecute();
				break;
			case 'H':
				heal1 = true;
				healvsexecute();
				break;
			case 'S':
				spear1 = true;
				spearvsexecute();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsexecute();
				break;
			case 'C':
				chains1 = true;
				chainsvsexecute();
				break;
			case 'R':
				refine1 = true;
				refinevsexecute();
				break;
			case 'D':
				door1 = true;
				doorvsexecute();
				break;
			case 'E':
				execute1 = true;
				executevsexecute();
				break;
			case 'T':
				thunder1 = true;
				executevsthunder();
				break;
			}
		}
		else if (attack_name2 == "Execute - Press E to cast") {
			execute2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsexecute();
				break;
			case 'B':
				barrier1 = true;
				barriervsexecute();
				break;
			case 'H':
				heal1 = true;
				healvsexecute();
				break;
			case 'S':
				spear1 = true;
				spearvsexecute();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsexecute();
				break;
			case 'C':
				chains1 = true;
				chainsvsexecute();
				break;
			case 'R':
				refine1 = true;
				refinevsexecute();
				break;
			case 'D':
				door1 = true;
				doorvsexecute();
				break;
			case 'E':
				execute1 = true;
				executevsexecute();
				break;
			case 'T':
				thunder1 = true;
				executevsthunder();
				break;
			}
		}
		else if (attack_name3 == "Execute - Press E to cast") {
			execute2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsexecute();
				break;
			case 'B':
				barrier1 = true;
				barriervsexecute();
				break;
			case 'H':
				heal1 = true;
				healvsexecute();
				break;
			case 'S':
				spear1 = true;
				spearvsexecute();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsexecute();
				break;
			case 'C':
				chains1 = true;
				chainsvsexecute();
				break;
			case 'R':
				refine1 = true;
				refinevsexecute();
				break;
			case 'D':
				door1 = true;
				doorvsexecute();
				break;
			case 'E':
				execute1 = true;
				executevsexecute();
				break;
			case 'T':
				thunder1 = true;
				executevsthunder();
				break;
			}
		}
		break;
	case 'T':
		if (attack_name1 == "Thunder - Press T to cast") {
			thunder2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsthunder();
				break;
			case 'B':
				barrier1 = true;
				barriervsthunder();
				break;
			case 'H':
				heal1 = true;
				healvsthunder();
				break;
			case 'S':
				spear1 = true;
				spearvsthunder();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsthunder();
				break;
			case 'C':
				chains1 = true;
				chainsvsthunder();
				break;
			case 'R':
				refine1 = true;
				refinevsthunder();
				break;
			case 'D':
				door1 = true;
				doorvsthunder();
				break;
			case 'E':
				execute1 = true;
				executevsthunder();
				break;
			case 'T':
				thunder1 = true;
				thundervsthunder();
				break;
			}
		}
		else if (attack_name2 == "Thunder - Press T to cast") {
			thunder2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name3 << endl;
			cout << "\t\t\t\t\t\t" << description3 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsthunder();
				break;
			case 'B':
				barrier1 = true;
				barriervsthunder();
				break;
			case 'H':
				heal1 = true;
				healvsthunder();
				break;
			case 'S':
				spear1 = true;
				spearvsthunder();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsthunder();
				break;
			case 'C':
				chains1 = true;
				chainsvsthunder();
				break;
			case 'R':
				refine1 = true;
				refinevsthunder();
				break;
			case 'D':
				door1 = true;
				doorvsthunder();
				break;
			case 'E':
				execute1 = true;
				executevsthunder();
				break;
			case 'T':
				thunder1 = true;
				thundervsthunder();
				break;
			}
		}
		else if (attack_name3 == "Thunder - Press T to cast") {
			thunder2 = true;
			player1_winner = 0;
			player2_winner = 0;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name1 << endl;
			cout << "\t\t\t\t\t\t" << description1 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << attack_name2 << endl;
			cout << "\t\t\t\t\t\t" << description2 << endl;
			cout << "" << endl;
			cout << "\t\t\t\t\t\t" << player1_name << " (Player1) what's your next move? ";
			cin >> player1_attack;
			switch (player1_attack) {
			case 'F':
				fireball1 = true;
				fireballvsthunder();
				break;
			case 'B':
				barrier1 = true;
				barriervsthunder();
				break;
			case 'H':
				heal1 = true;
				healvsthunder();
				break;
			case 'S':
				spear1 = true;
				spearvsthunder();
				break;
			case 'M':
				mirror1 = true;
				mirrorvsthunder();
				break;
			case 'C':
				chains1 = true;
				chainsvsthunder();
				break;
			case 'R':
				refine1 = true;
				refinevsthunder();
				break;
			case 'D':
				door1 = true;
				doorvsthunder();
				break;
			case 'E':
				execute1 = true;
				executevsthunder();
				break;
			case 'T':
				thunder1 = true;
				thundervsthunder();
				break;
			}
		}
		break;

	}
}

void questions() {
	//for random questions
	srand((unsigned int)time(0));

	int i = (rand() % 50) + 1;

	if (i == 1) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn which Italian city can you find the colosseum?" << endl;
		cout << "\t\t\t\t\t\t\t a) Venice" << endl;
		cout << "\t\t\t\t\t\t\t b) Rome" << endl;
		cout << "\t\t\t\t\t\t\t c) Naples" << endl;
		cout << "\t\t\t\t\t\t\t d) Milan" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}

	}
	else if (i == 2) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the largest canyon in the world?" << endl;
		cout << "\t\t\t\t\t\t\t a) Verdon Gorge, France" << endl;
		cout << "\t\t\t\t\t\t\t b) King's Canyon, Australia'" << endl;
		cout << "\t\t\t\t\t\t\t c) Grand Canyon, USA" << endl;
		cout << "\t\t\t\t\t\t\t d) Fjaorargljufur Canyon, Iceland" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 3) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";	
		cout << "" << endl;
		cout << "\t\t\t\t\tHow long is the border between the United States and Canada?" << endl;
		cout << "\t\t\t\t\t\t\t a) 3,525 miles" << endl;
		cout << "\t\t\t\t\t\t\t b) 4,525 miles" << endl;
		cout << "\t\t\t\t\t\t\t c) 5,525 miles" << endl;
		cout << "\t\t\t\t\t\t\t d) 6,525 miles" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 4) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the largest active volcano in the world?" << endl;
		cout << "\t\t\t\t\t\t\t a) Mount Etna" << endl;
		cout << "\t\t\t\t\t\t\t b) Mount Vesuvius" << endl;
		cout << "\t\t\t\t\t\t\t c) Mouna Loa" << endl;
		cout << "\t\t\t\t\t\t\t d) Mount Batur" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 5) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn which museum can you find Leonardo Da Vinci's Mona Lisa?'" << endl;
		cout << "\t\t\t\t\t\t\t a) Le Louvre" << endl;
		cout << "\t\t\t\t\t\t\t b) Ufizi Museum" << endl;
		cout << "\t\t\t\t\t\t\t c) British Museum" << endl;
		cout << "\t\t\t\t\t\t\t d) Metropolitan Museum of Art" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {

				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 6) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the largest continent in size?" << endl;
		cout << "\t\t\t\t\t\t\t a) Asia" << endl;
		cout << "\t\t\t\t\t\t\t b) Africa" << endl;
		cout << "\t\t\t\t\t\t\t c) Europe" << endl;
		cout << "\t\t\t\t\t\t\t d) North America" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 7) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich French king was nicknamed the Sun King?" << endl;
		cout << "\t\t\t\t\t\t\t a) Louis XVI" << endl;
		cout << "\t\t\t\t\t\t\t b) Charlemagne" << endl;
		cout << "\t\t\t\t\t\t\t c) Francis I" << endl;
		cout << "\t\t\t\t\t\t\t d) Louis XIV" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 8) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhen was Donald Trump elected as the Presient of the United States?" << endl;
		cout << "\t\t\t\t\t\t\t a) 2016" << endl;
		cout << "\t\t\t\t\t\t\t b) 2017" << endl;
		cout << "\t\t\t\t\t\t\t c) 2018" << endl;
		cout << "\t\t\t\t\t\t\t d) 2019" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 9) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the national animal of Scotland?" << endl;
		cout << "\t\t\t\t\t\t\t a) Peacock" << endl;
		cout << "\t\t\t\t\t\t\t b) Markhor" << endl;
		cout << "\t\t\t\t\t\t\t c) Lion" << endl;
		cout << "\t\t\t\t\t\t\t d) Unicorn" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 10) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tA la Crecy is a French ingredient made of what?" << endl;
		cout << "\t\t\t\t\t\t\t a) Apples" << endl;
		cout << "\t\t\t\t\t\t\t b) Carrots" << endl;
		cout << "\t\t\t\t\t\t\t c) Potatoes" << endl;
		cout << "\t\t\t\t\t\t\t d) Chili" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 11) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat native country is Brazil?" << endl;
		cout << "\t\t\t\t\t\t\t a) South American" << endl;
		cout << "\t\t\t\t\t\t\t b) North American" << endl;
		cout << "\t\t\t\t\t\t\t c) West American" << endl;
		cout << "\t\t\t\t\t\t\t d) East American" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 12) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich letter in the English Alphabet can not be seen in the periodic table?" << endl;
		cout << "\t\t\t\t\t\t\t a) V" << endl;
		cout << "\t\t\t\t\t\t\t b) W" << endl;
		cout << "\t\t\t\t\t\t\t c) Y" << endl;
		cout << "\t\t\t\t\t\t\t d) J" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 13) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the order of the stones when Thanos get them?" << endl;
		cout << "\t\t\t\t\t\t\t a) Mind, Power, Space, Reality, Time, Soul" << endl;
		cout << "\t\t\t\t\t\t\t b) Soul, Space, Time, Reality, Mind, Power" << endl;
		cout << "\t\t\t\t\t\t\t c) Space, Power, Reality, Time, Soul, Mind" << endl;
		cout << "\t\t\t\t\t\t\t d) Power, Space, Reality, Soul, Time, Mind" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 14) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the longest that an elephant has ever lived? (That we know of)" << endl;
		cout << "\t\t\t\t\t\t\t a) 17 years" << endl;
		cout << "\t\t\t\t\t\t\t b) 49 years" << endl;
		cout << "\t\t\t\t\t\t\t c) 105 years" << endl;
		cout << "\t\t\t\t\t\t\t d) 142 years" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 15) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow many rings are on the Olympic flag?" << endl;
		cout << "\t\t\t\t\t\t\t a) 4" << endl;
		cout << "\t\t\t\t\t\t\t b) 5" << endl;
		cout << "\t\t\t\t\t\t\t c) 6" << endl;
		cout << "\t\t\t\t\t\t\t d) 7" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 16) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is a tarsier?" << endl;
		cout << "\t\t\t\t\t\t\t a) a bird" << endl;
		cout << "\t\t\t\t\t\t\t b) a lizard" << endl;
		cout << "\t\t\t\t\t\t\t c) a mammal" << endl;
		cout << "\t\t\t\t\t\t\t d) a primate" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 17) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the last sense to die with us?" << endl;
		cout << "\t\t\t\t\t\t\t a) sight" << endl;
		cout << "\t\t\t\t\t\t\t b) hearing" << endl;
		cout << "\t\t\t\t\t\t\t c) feel" << endl;
		cout << "\t\t\t\t\t\t\t d) smell" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 18) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow did Spider-Man get his powers?" << endl;
		cout << "\t\t\t\t\t\t\t a) Bitten by a radioactive spider" << endl;
		cout << "\t\t\t\t\t\t\t b) Born with them" << endl;
		cout << "\t\t\t\t\t\t\t c) Military experiment gone awry" << endl;
		cout << "\t\t\t\t\t\t\t d) Woke up with them after a strange dream" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 19) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn darts, what's the most points you can score with a single throw?" << endl;
		cout << "\t\t\t\t\t\t\t a) 20" << endl;
		cout << "\t\t\t\t\t\t\t b) 50" << endl;
		cout << "\t\t\t\t\t\t\t c) 60" << endl;
		cout << "\t\t\t\t\t\t\t d) 100" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 20) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich of these animals does not appear in the Chinese zodiac" << endl;
		cout << "\t\t\t\t\t\t\t a) Bear" << endl;
		cout << "\t\t\t\t\t\t\t b) Dog" << endl;
		cout << "\t\t\t\t\t\t\t c) Dragon" << endl;
		cout << "\t\t\t\t\t\t\t d) Rabbit" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else  if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 21) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWho are known as Brahmins?" << endl;
		cout << "\t\t\t\t\t\t\t a) Members of India's highest castle" << endl;
		cout << "\t\t\t\t\t\t\t b) Surfers in California" << endl;
		cout << "\t\t\t\t\t\t\t c) It is a totally made up word" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 22) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow many holes are on a standard bowling ball" << endl;
		cout << "\t\t\t\t\t\t\t a) 2" << endl;
		cout << "\t\t\t\t\t\t\t b) 3" << endl;
		cout << "\t\t\t\t\t\t\t c) 5" << endl;
		cout << "\t\t\t\t\t\t\t d) 10" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 23) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat are the main colors on the flag of Spain?" << endl;
		cout << "\t\t\t\t\t\t\t a) Black and yellow" << endl;
		cout << "\t\t\t\t\t\t\t b) Blue and white" << endl;
		cout << "\t\t\t\t\t\t\t c) Green and white" << endl;
		cout << "\t\t\t\t\t\t\t d) Red and yellow" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 24) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is a pomelo?" << endl;
		cout << "\t\t\t\t\t\t\t a) A breed of dog" << endl;
		cout << "\t\t\t\t\t\t\t b) An old-fashioned punching bag" << endl;
		cout << "\t\t\t\t\t\t\t c) The largest citrus fruit" << endl;
		cout << "\t\t\t\t\t\t\t d) Just a citrus fruit" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 25) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWho killed Greedo?" << endl;
		cout << "\t\t\t\t\t\t\t a) Hannibal Lecter" << endl;
		cout << "\t\t\t\t\t\t\t b) Han Solo" << endl;
		cout << "\t\t\t\t\t\t\t c) Hermione Granger" << endl;
		cout << "\t\t\t\t\t\t\t d) Hercules" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 26) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow many points is the letter X worth in English-language Scrabble" << endl;
		cout << "\t\t\t\t\t\t\t a) 8" << endl;
		cout << "\t\t\t\t\t\t\t b) 11" << endl;
		cout << "\t\t\t\t\t\t\t c) 18" << endl;
		cout << "\t\t\t\t\t\t\t d) 22" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 27) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the name for the Jewish New Year?" << endl;
		cout << "\t\t\t\t\t\t\t a) Hanukkah" << endl;
		cout << "\t\t\t\t\t\t\t b) Yom Kippur" << endl;
		cout << "\t\t\t\t\t\t\t c) Kwanza" << endl;
		cout << "\t\t\t\t\t\t\t d) Rosh Hashanah" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 28) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow many blue stripes are there on the U.S. flag?" << endl;
		cout << "\t\t\t\t\t\t\t a) 6" << endl;
		cout << "\t\t\t\t\t\t\t b) 7" << endl;
		cout << "\t\t\t\t\t\t\t c) 0" << endl;
		cout << "\t\t\t\t\t\t\t d) 13" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 29) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich one of these characters is not friends with Harry Potter?" << endl;
		cout << "\t\t\t\t\t\t\t a) Ron Weasley" << endl;
		cout << "\t\t\t\t\t\t\t b) Neville Longbottom" << endl;
		cout << "\t\t\t\t\t\t\t c) Draco Malfoy" << endl;
		cout << "\t\t\t\t\t\t\t d) Hermione Granger" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 30) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich planet is the hotttest?" << endl;
		cout << "\t\t\t\t\t\t\t a) Venus" << endl;
		cout << "\t\t\t\t\t\t\t b) Saturn" << endl;
		cout << "\t\t\t\t\t\t\t c) Mercury" << endl;
		cout << "\t\t\t\t\t\t\t d) Mars" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 31) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWho was the only U.S. President to resign?" << endl;
		cout << "\t\t\t\t\t\t\t a) Herbert Hoover" << endl;
		cout << "\t\t\t\t\t\t\t b) Richard Nixon" << endl;
		cout << "\t\t\t\t\t\t\t c) George W. Bush" << endl;
		cout << "\t\t\t\t\t\t\t d) Barack Obama" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 32) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn which city can you find the Liberty Bell?" << endl;
		cout << "\t\t\t\t\t\t\t a) Washington, D.C." << endl;
		cout << "\t\t\t\t\t\t\t b) Boston" << endl;
		cout << "\t\t\t\t\t\t\t c) Philadelphia" << endl;
		cout << "\t\t\t\t\t\t\t d) Manhattan" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 33) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn Pirates of the Caribbean, what was Captain Jack Sparrow's ship's name?" << endl;
		cout << "\t\t\t\t\t\t\t a) The Marauder" << endl;
		cout << "\t\t\t\t\t\t\t b) The Black Pearl" << endl;
		cout << "\t\t\t\t\t\t\t c) The Black Python" << endl;
		cout << "\t\t\t\t\t\t\t d) The Sparrow of the Sea" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 34) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tAccording to Forrest Gump, life was like..." << endl;
		cout << "\t\t\t\t\t\t\t a) a bag of lemons" << endl;
		cout << "\t\t\t\t\t\t\t b) a bag of roses" << endl;
		cout << "\t\t\t\t\t\t\t c) a lollipop" << endl;
		cout << "\t\t\t\t\t\t\t d) a box of chocolates" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 35) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the rarest blood type?" << endl;
		cout << "\t\t\t\t\t\t\t a) O" << endl;
		cout << "\t\t\t\t\t\t\t b) A" << endl;
		cout << "\t\t\t\t\t\t\t c) B" << endl;
		cout << "\t\t\t\t\t\t\t d) AB-Negative" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 36) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow many bones are there in the human body?" << endl;
		cout << "\t\t\t\t\t\t\t a) 206" << endl;
		cout << "\t\t\t\t\t\t\t b) 205" << endl;
		cout << "\t\t\t\t\t\t\t c) 201" << endl;
		cout << "\t\t\t\t\t\t\t d) 209" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 37) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tFe is the chemical symbol for" << endl;
		cout << "\t\t\t\t\t\t\t a) Zinc" << endl;
		cout << "\t\t\t\t\t\t\t b) Hydrogen" << endl;
		cout << "\t\t\t\t\t\t\t c) Flourine" << endl;
		cout << "\t\t\t\t\t\t\t d) Iron" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 38) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich boyband sings the song I Want It That Way?" << endl;
		cout << "\t\t\t\t\t\t\t a) One Direction" << endl;
		cout << "\t\t\t\t\t\t\t b) Backstreet Boys" << endl;
		cout << "\t\t\t\t\t\t\t c) NSYNC" << endl;
		cout << "\t\t\t\t\t\t\t d) BTS" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 39) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWho painted the Sistine Chapel ceiling?" << endl;
		cout << "\t\t\t\t\t\t\t a) Picasso" << endl;
		cout << "\t\t\t\t\t\t\t b) Da Vinci" << endl;
		cout << "\t\t\t\t\t\t\t c) Michelangelo" << endl;
		cout << "\t\t\t\t\t\t\t d) Van Gogh" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 40) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn which state did the Salem Witch Trials take place?" << endl;
		cout << "\t\t\t\t\t\t\t a) Washington" << endl;
		cout << "\t\t\t\t\t\t\t b) Virginia" << endl;
		cout << "\t\t\t\t\t\t\t c) Massachusetts" << endl;
		cout << "\t\t\t\t\t\t\t d) Pennsylvania" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 41) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich New York City building is the tallest?" << endl;
		cout << "\t\t\t\t\t\t\t a) Empire State Building" << endl;
		cout << "\t\t\t\t\t\t\t b) Bank of America Tower" << endl;
		cout << "\t\t\t\t\t\t\t c) One World Trade Center" << endl;
		cout << "\t\t\t\t\t\t\t d) Statue of Liberty" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 42) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is sodium chloride?" << endl;
		cout << "\t\t\t\t\t\t\t a) Salt" << endl;
		cout << "\t\t\t\t\t\t\t b) Sugar" << endl;
		cout << "\t\t\t\t\t\t\t c) Chlorine" << endl;
		cout << "\t\t\t\t\t\t\t d) Bleach" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 43) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhich Olympic sport is Michael Phelps known for?" << endl;
		cout << "\t\t\t\t\t\t\t a) Snowboarding" << endl;
		cout << "\t\t\t\t\t\t\t b) Skiing" << endl;
		cout << "\t\t\t\t\t\t\t c) Running" << endl;
		cout << "\t\t\t\t\t\t\t d) Swimming" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'd':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 44) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the complementary color of green?" << endl;
		cout << "\t\t\t\t\t\t\t a) blue" << endl;
		cout << "\t\t\t\t\t\t\t b) yellow" << endl;
		cout << "\t\t\t\t\t\t\t c) red" << endl;
		cout << "\t\t\t\t\t\t\t d) purple" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 45) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat is the singular word for spaghetti?" << endl;
		cout << "\t\t\t\t\t\t\t a) Spaghetto" << endl;
		cout << "\t\t\t\t\t\t\t b) Spaghetti" << endl;
		cout << "\t\t\t\t\t\t\t c) A piece of spaghetii" << endl;
		cout << "\t\t\t\t\t\t\t d) Spaghettus" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'a':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 46) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tIn what year did women get the right to vote?" << endl;
		cout << "\t\t\t\t\t\t\t a) 1910" << endl;
		cout << "\t\t\t\t\t\t\t b) 1920" << endl;
		cout << "\t\t\t\t\t\t\t c) 1930" << endl;
		cout << "\t\t\t\t\t\t\t d) 1940" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 47) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tNeil Armstrong was the first man..." << endl;
		cout << "\t\t\t\t\t\t\t a) on Mars" << endl;
		cout << "\t\t\t\t\t\t\t b) on a spacecraft alone" << endl;
		cout << "\t\t\t\t\t\t\t c) on the Moon" << endl;
		cout << "\t\t\t\t\t\t\t d) to travel to space" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 48) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWhat does FBI stands for?" << endl;
		cout << "\t\t\t\t\t\t\t a) Female Body Inspector" << endl;
		cout << "\t\t\t\t\t\t\t b) Federal Bureau of Investigation" << endl;
		cout << "\t\t\t\t\t\t\t c) Federal Business of Investigation" << endl;
		cout << "\t\t\t\t\t\t\t d) Federal Bureau of Inspection" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 49) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tHow often does the moon orbit the Earth?" << endl;
		cout << "\t\t\t\t\t\t\t a) every 7 days" << endl;
		cout << "\t\t\t\t\t\t\t b) every 27 days" << endl;
		cout << "\t\t\t\t\t\t\t c) every 30 days" << endl;
		cout << "\t\t\t\t\t\t\t d) every 365 days" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'b':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
	else if (i == 50) {
		status_play = "";
		status_debuff_player1 = "";
		status_debuff_player2 = "";
		cout << "" << endl;
		cout << "\t\t\t\t\tWho founded Microsoft?" << endl;
		cout << "\t\t\t\t\t\t\t a) Andrew Tate" << endl;
		cout << "\t\t\t\t\t\t\t b) Steve Jobs" << endl;
		cout << "\t\t\t\t\t\t\t c) Bill Gates" << endl;
		cout << "\t\t\t\t\t\t\t d) Mark Zuckerbrg" << endl;
		cout << "" << endl;

		rps();

		switch (answer) {
		case 'c':
			if (player1_winner == 1) {
				correct_answer1 += 1;
			}
			else if (player2_winner == 1) {
				correct_answer2 += 1;
			}
			randomizer_attacks();
			if (battle == 1) {
				bvb();
			}
			else if (battle == 2) {
				bvc();
			}
			else if (battle == 3) {
				bvh();
			}
			else if (battle == 4) {
				cvb();
			}
			else if (battle == 5) {
				cvc();
			}
			else if (battle == 6) {
				cvh();
			}
			else if (battle == 7) {
				hvb();
			}
			else if (battle == 8) {
				hvc();
			}
			else if (battle == 9) {
				hvh();
			}
			break;
		default:
			if (player1_winner == 1) {
				wrong_answer1 += 1;
			}
			else if (player2_winner == 1) {
				wrong_answer2 += 1;
			}
			cout << "\t\t\t\t\tWRONG!!!" << endl;
			questions();
		}
	}
}


void rps() {
	cout << "Player1 type in your move (R,P,S): ";
	for (int f1 = 0; f1 <= 0; f1++) {
		player1_rps = _getch();
		ropasc1[f1] = player1_rps;
		player1_rps = '*';
		cout << player1_rps << endl;
	}

	cout << "Player2 type in your move (R,P,S): ";
	for (int f2 = 0; f2 <= 0; f2++) {
		player2_rps = _getch();
		ropasc2[f2] = player2_rps;
		player2_rps = '*';
		cout << player2_rps << endl;
	}
	rps_decision();
}

void rps_decision() {
	if (ropasc1[f1] == rock and ropasc2[f2] == paper) {
		player1_real = "Rock";
		player2_real = "Paper";
		winner2_declare();
	}
	else if (ropasc1[f1] == rock and ropasc2[f2] == scissor) {
		player1_real = "Rock";
		player2_real = "Scissor";
		winner1_declare();
	}
	else if (ropasc1[f1] == paper and ropasc2[f2] == rock) {
		player1_real = "Paper";
		player2_real = "Rock";
		winner1_declare();
	}
	else if (ropasc1[f1] == paper and ropasc2[f2] == scissor) {
		player1_real = "Paper";
		player2_real = "Scissor";
		winner2_declare();
	}
	else if (ropasc1[f1] == scissor and ropasc2[f2] == rock) {
		player1_real = "Scissor";
		player2_real = "Rock";
		winner2_declare();
	}
	else if (ropasc1[f1] == scissor and ropasc2[f2] == paper) {
		player1_real = "Scissor";
		player2_real = "Paper";
		winner1_declare();
	}
	else {
		rps();
	}
}


void winner1_declare() {
	x1 = 1;

	if (player2_choice == 'C' and c1 == 0) {
		cout << player1_name << " picked: " << player1_real << endl;
		cout << player2_name << " picked: " << player2_real << endl;
		cout << " " << endl;
		cout << "Player2 Clueless Idiot's Passive has been triggered!" << endl;
		c1 += 1;
		questions();
	}
	else if (player2_choice == 'C' and c1 >= 1) {
		player1_winner = 1;
		cout << player1_name << " picked: " << player1_real << endl;
		cout << player2_name << " picked: " << player2_real << endl;
		cout << "" << endl;
		cout << "Player2 Clueless Idiot's Passive has been exhausted!" << endl;
		cout << "\t\t\t\t\tCongrats " << player1_name << ". Now, answer this question" << endl;
		cout << player1_name << ": ";
		cin >> answer;
	}
	else if (player2_choice != 'C') {
		player1_winner = 1;
		cout << player1_name << " picked: " << player1_real << endl;
		cout << player2_name << " picked: " << player2_real << endl;

		cout << "\t\t\t\t\tCongrats " << player1_name << ". Now, answer this question" << endl;
		cout << player1_name << ": ";
		cin >> answer;
	}
}

void winner2_declare() {
	x2 = 1;

	if (player1_choice == 'C' and c2 == 0) {
		cout << player1_name << " picked: " << player1_real << endl;
		cout << player2_name << " picked: " << player2_real << endl;
		cout << " " << endl;
		cout << "Player1 Clueless Idiot's Passive has been triggered!" << endl;
		c2 += 1;
		questions();
	}
	else if (player1_choice == 'C' and c2 >= 1) {
		player2_winner = 1;
		cout << player1_name << " picked: " << player1_real << endl;
		cout << player2_name << " picked: " << player2_real << endl;
		cout << "" << endl;
		cout << "Player1 Clueless Idiot's Passive has been exhausted!" << endl;
		cout << "\t\t\t\t\tCongrats " << player2_name << ". Now, answer this question" << endl;
		cout << player2_name << ": ";
		cin >> answer;
	}
	else if (player1_choice != 'C') {
		player2_winner = 1;
		cout << player1_name << " picked: " << player1_real << endl;
		cout << player2_name << " picked: " << player2_real << endl;

		cout << "\t\t\t\t\tCongrats " << player2_name << ". Now, answer this question" << endl;
		cout << player2_name << ": ";
		cin >> answer;
	}
}

void randomizer_attacks() {
	srand((unsigned int)time(0));

	int num1 = (rand() % 10) + 1;
	int num2 = (rand() % 10) + 1;
	int num3 = (rand() % 10) + 1;


	if (num1 == 1) {
		attack_name1 = "Barrier - Press B to cast";
		description1 = "Blocks 50% of the received damage";
	}
	else if (num1 == 2) {
		attack_name1 = "Chains - Press C to cast";
		description1 = "Restricts an opponent from using his/her chosen move";
	}
	else if (num1 == 3) {
		attack_name1 = "Door - Press D to cast";
		description1 = "Redirects an attack back to the caster";
	}
	else if (num1 == 4) {
		attack_name1 = "Execute - Press E to cast";
		description1 = "Deals half of the enemy's current health as damage";
	}
	else if (num1 == 5) {
		attack_name1 = "Fireball - Press F to cast";
		description1 = "Deals 1 damage and burn that deals 0.2 every turn";
	}
	else if (num1 == 6) {
		attack_name1 = "Heal - Press H to cast";
		description1 = "Grants 1 hp";
	}
	else if (num1 == 7) {
		attack_name1 = "Mirror - Press M to cast";
		description1 = "Copies the opponent's chosen move";
	}
	else if (num1 == 8) {
		attack_name1 = "Refine - Press R to cast";
		description1 = "Purifies the caster from chain or burn debuffs";
	}
	else if (num1 == 9) {
		attack_name1 = "Spear - Press S to cast";
		description1 = "Deals 0.5 damage, but deals 1 damage when enemy is using Barrier";
	}
	else if (num1 == 10) {
		attack_name1 = "Thunder - Press T to cast";
		description1 = "Has 50-50 chance of dealing 1 damage or 0.5 damage with stun";
	}

	if (num2 == 1) {
		attack_name2 = "Barrier - Press B to cast";
		description2 = "Blocks 50% of the received damage";
	}
	else if (num2 == 2) {
		attack_name2 = "Chains - Press C to cast";
		description2 = "Restricts an opponent from using his/her chosen move";
	}
	else if (num2 == 3) {
		attack_name2 = "Door - Press D to cast";
		description2 = "Redirects an attack back to the caster";
	}
	else if (num2 == 4) {
		attack_name2 = "Execute - Press E to cast";
		description2 = "Deals half of the enemy's current health as damage";
	}
	else if (num2 == 5) {
		attack_name2 = "Fireball - Press F to cast";
		description2 = "Deals 1 damage and burn that deals 0.2 every turn";
	}
	else if (num2 == 6) {
		attack_name2 = "Heal - Press H to cast";
		description2 = "Grants 1 hp";
	}
	else if (num2 == 7) {
		attack_name2 = "Mirror - Press M to cast";
		description2 = "Copies the opponent's chosen move";
	}
	else if (num2 == 8) {
		attack_name2 = "Refine - Press R to cast";
		description2 = "Purifies the caster from chain or burn debuffs";
	}
	else if (num2 == 9) {
		attack_name2 = "Spear - Press S to cast";
		description2 = "Deals 0.5 damage, but deals 1 damage when enemy is using Barrier";
	}
	else if (num2 == 10) {
		attack_name2 = "Thunder - Press T to cast";
		description2 = "Has 50-50 chance of dealing 1 damage or 0.5 damage with stun";
	}

	if (num3 == 1) {
		attack_name3 = "Barrier - Press B to cast";
		description3 = "Blocks 50% of the received damage";
	}
	else if (num3 == 2) {
		attack_name3 = "Chains - Press C to cast";
		description3 = "Restricts an opponent from using his/her chosen move";
	}
	else if (num3 == 3) {
		attack_name3 = "Door - Press D to cast";
		description3 = "Redirects an attack back to the caster";
	}
	else if (num3 == 4) {
		attack_name3 = "Execute - Press E to cast";
		description3 = "Deals half of the enemy's current health as damage";
	}
	else if (num3 == 5) {
		attack_name3 = "Fireball - Press F to cast";
		description3 = "Deals 1 damage and burn that deals 0.2 every turn";
	}
	else if (num3 == 6) {
		attack_name3 = "Heal - Press H to cast";
		description3 = "Grants 1 hp";
	}
	else if (num3 == 7) {
		attack_name3 = "Mirror - Press M to cast";
		description3 = "Copies the opponent's chosen move";
	}
	else if (num3 == 8) {
		attack_name3 = "Refine - Press R to cast";
		description3 = "Purifies the caster from chain or burn debuffs";
	}
	else if (num3 == 9) {
		attack_name3 = "Spear - Press S to cast";
		description3 = "Deals 0.5 damage, but deals 1 damage when enemy is using Barrier";
	}
	else if (num3 == 10) {
		attack_name3 = "Thunder - Press T to cast";
		description3 = "Has 50-50 chance of dealing 1 damage or 0.5 damage with stun";
	}

}
//voids for fireball scenarios
void fireballvsfireball() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2 / 2;
		multihearts_player2 -= dmg_of_player1 / 2;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2 / 2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1.5;

		multihearts_player1 -= dmg_of_player2 / 2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1 / 2;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1.5;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1.5;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1 / 2;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1.5;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Both players used Fireball and is damaged!";
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		burned1 = true;
		burned2 = true;
		dmg_of_player1 = 1.5;
		dmg_of_player2 = 1.5;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Both players used Fireball and is damaged!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2 = false;
}
void fireballvsbarrier() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= ((dmg_of_player1 / 2) / 2);
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= ((dmg_of_player2 / 2) / 2);
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= ((dmg_of_player2 / 2) / 2);
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= ((dmg_of_player2 / 2) / 2);
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= ((dmg_of_player1 / 2) / 2);
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= ((dmg_of_player1 / 2) / 2);
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= (dmg_of_player2 / 2);
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'F' and player2_attack == 'B') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Fireball!";
		}
		else if (player1_attack == 'B' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Fireball!";
		}
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, barrier1, barrier2 = false;
}

void fireballvsheal() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}

	if (heal1 == true and multihearts_player1 < 3) {
		multihearts_player1 += 1;
		status_debuff_player1 = "Player 1 has received +1 heal!";
	}
	else if (heal1 == true and multihearts_player1 >= 3) {
		status_debuff_player1 = "Player 1 is at full health!";
	}
	else if (heal2 == true and multihearts_player2 < 3) {
		multihearts_player2 += 1;
		status_debuff_player2 = "Player 2 has received +1 heal!";
	}
	else if (heal1 == true and multihearts_player2 >= 3) {
		status_debuff_player2 = "Player 2 is at full health!";
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, heal1, heal2 = false;
}

void fireballvsspear() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.75;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.75;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1.5;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.75;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1.5;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'F' and player2_attack == 'S') {
			burned1 = true;
			dmg_of_player1 = 1.5;
			dmg_of_player2 = 0.75;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Fireball!";
		}
		else if (player1_attack == 'S' and player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;
			dmg_of_player1 = 0.75;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Fireball!";
		}
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, spear1, spear2 = false;
}

void fireballvsmirror() {

	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		burned1, burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2 / 2;
		multihearts_player2 -= dmg_of_player1 / 2;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		burned1, burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2 / 2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		burned1, burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1.5;

		multihearts_player1 -= dmg_of_player2 / 2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		burned1, burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1 / 2;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		burned1, burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		burned1, burned2 = true;
		dmg_of_player1 = 1;
		dmg_of_player2 = 1.5;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		burned1, burned2 = true;
		dmg_of_player1 = 1.5;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1 / 2;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		burned1, burned2 = true;
		dmg_of_player1 = 1.5;
		dmg_of_player2 = 1;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		burned1, burned2 = true;
		dmg_of_player1 = 1.5;
		dmg_of_player2 = 1.5;

		multihearts_player1 -= dmg_of_player2;
		multihearts_player2 -= dmg_of_player1;
		status_play = "Fireball was copied and so both players were damaged!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, mirror1, mirror2 = false;
}

void fireballvschains() {
	if (chains1 == true) {
		chained1 = true;
		status_debuff_player1 = "Player1 has been chained";
	}
	else if (chains2 == true) {
		chained2 = true;
		status_debuff_player2 = "Player2 has been chained";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, chains1, chains2 = false;
}

void fireballvsrefine() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Fireball!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Fireball!";
		}
	}

	if (refine1 == true) {
		burned2 = false;
		chained2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
		chained1 = false;
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, refine1, refine2 = false;
}

void fireballvsdoor() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'F') {
			burned1 = true;
			dmg_of_player1 = 1.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Fireball has been redirected!";
		}
		else if (player2_attack == 'F') {
			burned2 = true;
			dmg_of_player2 = 1.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Fireball has been redirected!";
		}
	}


	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, door1, door2 = false;
}

void fireballvsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1.5;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1.5;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1.5;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1.5;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'F' and player2_attack == 'E') {
			burned1 = true;
			dmg_of_player1 = 1.5;
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute while Player 1 used Fireball!";
		}
		else if (player2_attack == 'F' and player1_attack == 'E') {
			burned2 = true;
			dmg_of_player2 = 1.5;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Execute while Player 2 used Fireball!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, execute1, execute2 = false;
}

void fireballvsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		fireballvsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";

			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= multihearts_player2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'F' and player2_attack == 'T') {
				burned1 = true;
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder while Player 1 used Fireball!";
			}
			else if (player2_attack == 'F' and player1_attack == 'T') {
				burned2 = true;
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Thunder while Player 2 used Fireball!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player2 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	fireball1, fireball2, thunder1, thunder2 = false;
}
//voids for barrier scenarios
void barriervsbarrier() {
	if (barrier1 == true and barrier2 == true) {
		status_play = "Both players used barrier!";
	}
	barrier1, barrier2 = false;
}
void barriervsheal() {
	if (heal1 == true and multihearts_player1 < 3) {
		multihearts_player1 += 1;
		status_debuff_player1 = "Player 1 received +1 heal!";
	}
	else if (heal2 == true and multihearts_player2 < 3) {
		multihearts_player2 += 1;
		status_debuff_player2 = "Player 2 received +1 heal!";
	}
	else {
		"A player tried healing but was full health!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, heal1, heal2 = false;
}

void barriervsspear() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 1.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1's Spear shattered Player 2's Barrier!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2's Spear shattered Player 1's Barrier!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, spear1, spear2 = false;
}

void barriervsmirror() {
	if (barrier1 == true and mirror2 == true or barrier2 == true and mirror1 == true) {
		status_play = "No damage was released or taken";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, mirror1, mirror2 = false;
}

void barriervschains() {
	if (chains1 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 has been chained";
	}
	else if (chains2 == true) {
		chained2 = true;
		status_debuff_player1 = "Player1 has been chained";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, chains1, chains2 = false;
}

void barriervsrefine() {
	if (refine1 == true) {
		burned2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
	}
	status_play = "No damage was released nor taken";
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, refine1, refine2 = false;
}

void barriervsdoor() {
	if (barrier1 == true and door2 == true or barrier2 == true and door1 == true) {
		status_play = "No damage was released nor taken";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
}

void barriervsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
				dmg_of_player1 = (multihearts_player2 / 2) / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2) / 2);

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = ((multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2) / 2);

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = ((multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'B' and player2_attack == 'E') {
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Barrier against Player 2's Execute!";
		}
		else if (player2_attack == 'B' and player1_attack == 'E') {
			dmg_of_player1 = ((multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Barrier against Player 1's Execute!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, execute1, execute2 = false;
}
void barriervsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		barriervsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1 / 2;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1 / 2;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1 / 2;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1 / 2;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1.5 / 2;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1 / 2;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1 / 2;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1 / 2;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1 / 2;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1 / 2;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1.5 / 2;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1 / 2;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1 / 2;

				multihearts_player1 -= multihearts_player2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1.5 / 2;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1 / 2;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1.5 / 2;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'B' and player2_attack == 'T') {
				dmg_of_player2 = 1.5 / 2;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Barrier against Player 2's Thunder!";
			}
			else if (player2_attack == 'B' and player1_attack == 'T') {
				dmg_of_player1 = 1.5 / 2;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Barrier against Player 1's Thunder!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	barrier1, barrier2, thunder1, thunder2 = false;
}
//void for heal scenarios
void healvsspear() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}

	if (heal1 == true and multihearts_player1 < 3) {
		multihearts_player1 += 1;
		status_debuff_player1 = "Player 1 received +1 heal!";
	}
	else if (heal1 == true and multihearts_player1 >= 3) {
		status_debuff_player1 = "Player 1 is at full health!";
	}
	else if (heal2 == true and multihearts_player2 < 3) {
		multihearts_player2 += 1;
		status_debuff_player2 = "Player 2 received +1 heal!";
	}
	else if (heal2 == true and multihearts_player2 >= 3) {
		status_debuff_player2 = "Player 2 is at full health!";
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2, spear1, spear2 = false;
}

void healvsmirror() {
	if (heal1 == true and mirror2 == true) {
		status_play = "Player 2 copied Player 1's heal!";
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}

		if (multihearts_player2 < 3) {
			multihearts_player2 += 1;
			status_debuff_player2 = "Player 2 received +1 heal!";
		}
		else if (multihearts_player2 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}
	}
	else if (heal2 == true and mirror1 == true) {
		status_play = "Player 1 copied Player 2's heal!";
		if (multihearts_player2 < 3) {
			multihearts_player2 += 1;
			status_debuff_player2 = "Player 2 received +1 heal!";
		}
		else if (multihearts_player2 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}

		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2, mirror1, mirror2 = false;
}

void healvschains() {
	if (chains1 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 has been chained!";
	}
	else if (chains2 == true) {
		chained2 = true;
		status_debuff_player1 = "Player1 has been chained!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	chains1, chains2, heal1, heal2 = false;
}

void healvsrefine() {
	if (refine1 == true) {
		burned2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
	}

	if (heal1 == true) {
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}
	}
	else if (heal2 == true) {
		if (multihearts_player2 < 3) {
			multihearts_player2 += 1;
			status_debuff_player2 = "Player 2 received +1 heal!";
		}
		else if (multihearts_player2 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2, refine1, refine2 = false;
}

void healvsdoor() {
	if (heal1 == true) {
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}
	}
	else if (heal2 == true) {
		if (multihearts_player2 < 3) {
			multihearts_player2 += 1;
			status_debuff_player2 = "Player 2 received +1 heal!";
		}
		else if (multihearts_player2 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2, door1, door2 = false;
}

void healvsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
				dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}

	if (heal1 == true) {
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 health!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}
	}
	else if (heal2 == true) {
		if (multihearts_player2 < 3) {
			multihearts_player2 += 1;
			status_debuff_player2 = "Player 2 received +1 health!";
		}
		else if (multihearts_player2 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2, execute1, execute2 = false;
}

void healvsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		healvsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= multihearts_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2;

				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (heal1 == true) {
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}
	}
	else if (heal2 == true) {
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player2 = "Player 2 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2, thunder1, thunder2 = false;
}

void healvsheal() {
	if (heal1 == true) {
		if (multihearts_player1 < 3) {
			multihearts_player1 += 1;
			status_debuff_player1 = "Player 1 received +1 heal!";
		}
		else if (multihearts_player1 >= 3) {
			status_debuff_player1 = "Player 1 is at full health!";
		}
	}

	if (heal2 == true) {
		if (multihearts_player2 < 3) {
			multihearts_player2 += 1;
			status_debuff_player2 = "Player 2 received +1 heal!";
		}
		else if (multihearts_player2 >= 3) {
			status_debuff_player2 = "Player 2 is at full health!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	heal1, heal2 = false;
}
//void for spear scenarios
void spearvsmirror() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player2_attack == 'S' and player1_attack == 'M') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player1_attack == 'M' and player2_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S' and player2_attack == 'M') {
			dmg_of_player1 = 1;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 copied Player 1's Spear!";
		}
		else if (player1_attack == 'M' and player2_attack == 'S') {
			dmg_of_player2 = 1;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 copied Player 2's Spear!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2, mirror1, mirror2 = false;
}

void spearvschains() {
	if (chains1 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 has been slained";
	}
	else if (chains2 == true) {
		chained2 = true;
		status_debuff_player1 = "Player1 has been slained";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2, chains1, chains2 = false;
}

void spearvsrefine() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear!";
		}
	}

	if (refine1 == true) {
		burned2 = false;
		chained2 = false;
		stunned2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
		chained1 = false;
		stunned1 = false;
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2, refine1, refine2 = false;
}

void spearvsdoor() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S') {
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Spear has been redirected!";
		}
		else if (player2_attack == 'S') {
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Spear has been redirected!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2, door1, door2 = false;
}

void spearvsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 1;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 1;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 1;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 1;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S' and player2_attack == 'E') {
			dmg_of_player1 = 1;
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 used Spear while Player 2 used Execute!";
		}
		else if (player2_attack == 'S' and player1_attack == 'E') {
			dmg_of_player2 = 1;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Spear while Player 1 used Execute!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2, execute1, execute2 = false;
}

void spearvsspear() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 0.5;
			dmg_of_player2 = 1;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 1;
			dmg_of_player1 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player2_attack == 'S' and player1_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 1;
			dmg_of_player2 = 0.5;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player2 = 0.5;
			dmg_of_player1 = 1;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Spear and received damage!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player1 = 1;
			dmg_of_player2 = 1;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Spear and received damage!";
		}
		else if (player1_attack == 'S' and player2_attack == 'S') {
			dmg_of_player2 = 1;
			dmg_of_player1 = 1;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Spear and received damage!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2 = false;
}

void spearvsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		spearvsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 0.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 0.5;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 0.5;
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 0.5;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 0.5;
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 0.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 0.5;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 0.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 0.5;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 0.5;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= multihearts_player2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 0.5;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 0.5;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'S' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Spear while Player 2 used Thunder!";
			}
			else if (player2_attack == 'S' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Spear while Player 1 used Thunder!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	spear1, spear2, thunder1, thunder2 = false;
}
//voids for mirror scenarios
void mirrorvsmirror() {
	if (mirror1 == true or mirror2 == true) {
		status_play = "Both copied nothing";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	mirror1, mirror2 = false;
}

void mirrorvschains() {
	if (mirror1 == true or mirror2 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 is chained";
		chained2 = true;
		status_debuff_player1 = "Player1 is chained";

	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	mirror1, mirror2, chains1, chains2 = false;
}

void mirrorvsrefine() {
	status_play = "Both used non-damaging abilities and received no damage!";
	if (mirror1 == true or mirror2 == true) {
		burned1, burned2 = false;
		chained1, chained2 = false;
		stunned1, stunned2 = false;
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	mirror1, mirror2, refine1, refine2 = false;
}

void mirrorvsdoor() {
	status_play = "No damage has been copied nor redirected";
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	mirror1, mirror2, door1, door2 = false;
}

void mirrorvsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'M' and player2_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 1 copied Player 2's Execute!";
		}
		else if (player2_attack == 'M' and player1_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 copied Player 1's Execute!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	mirror1, mirror2, execute1, execute2 = false;
}

void mirrorvsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		mirrorvsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= multihearts_player2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'M' and player2_attack == 'T') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 copied Player 2's Thunder!";
			}
			else if (player2_attack == 'M' and player1_attack == 'T') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 copied Player 1's Thunder!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	mirror1, mirror2, thunder1, thunder2 = false;
}
//voids for chains scenario
void chainsvschains() {
	status_play = "Both players were chained!";
	if (chains1 == true) {
		chained1 = true;
	}
	else if (chains2 == true) {
		chained2 = true;
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	chains1, chains2 = false;
}

void chainsvsrefine() {
	if (refine1 == true) {
		chained2 = false;
		burned2 = false;
		stunned2 = false;
		status_play = "Player 1 chained Player 2 but was refined!";
	}
	else if (refine2 == true) {
		chained1 = false;
		burned1 = false;
		stunned1 = false;
		status_play = "Player 2 chained Player 1 but was refined!";
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	chains1, chains2, refine1, refine2 = false;
}

void chainsvsdoor() {
	if (chains1 == true) {
		chained2 = true;
		status_debuff_player1 = "Player1 is chained!";
	}
	else if (chains2 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 is chained!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	chains1, chains2, door1, door2 = false;
}

void chainsvsexecute() {
	if (chains1 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 is chained!";
	}
	else if (chains2 == true) {
		chained2 = true;
		status_debuff_player1 = "Player1 is chained!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	chains1, chains2, execute1, execute2 = false;
}

void chainsvsthunder() {
	if (chains1 == true) {
		chained1 = true;
		status_debuff_player2 = "Player2 is chained!";
	}
	else if (chains2 == true) {
		chained2 = true;
		status_debuff_player1 = "Player1 is chained!";
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	chains1, chains2, thunder1, thunder2 = false;
}
//voids for refine scenarios
void refinevsrefine() {
	status_play = "Both players used Refine and received no damage!";
	if (refine1 == true or refine2 == true) {
		burned1, burned2 = false;
		chained1, chained2 = false;
		stunned1, stunned2 = false;
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	refine1, refine2 = false;
}
void refinevsdoor() {
	status_play = "Both players used non-damage abilities!";
	if (refine1 == true) {
		burned2 = false;
		chained2 = false;
		stunned2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
		chained1 = false;
		stunned1 = false;
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	refine1, refine2, door1, door2 = false;
}

void refinevsexecute() {
	if (refine1 == true) {
		burned2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
	}

	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			status_play = "Player 2 used Execute!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			status_play = "Player 1 used Execute!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	refine1, refine2, execute1, execute2 = false;
}

void refinevsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		refinevsthunder();
	}

	if (refine1 == true) {
		burned2 = false;
	}
	else if (refine2 == true) {
		burned1 = false;
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 2 used Thunder!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	refine1, refine2, thunder1, thunder2 = false;
}
//voids for door scenarios
void doorvsdoor() {
	status_play = "Both used Doors and receive dno damage!";
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	door1, door2 = false;
}

void doorvsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			\
				dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player1 / 2;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player2 / 2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player2_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Execute has been redirected!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player2_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player2;
			status_play = "Player 2's Execute has been redirected!";
		}
		else if (player1_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player1;
			status_play = "Player 1's Execute has been redirected!";
		}
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	door1, door2, execute1, execute2 = false;
}

void doorvsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		doorvsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player2 / 2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player1 / 2;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player1 / 2;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player1 / 2;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player2 / 2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player1;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player1;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player1;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player2 / 2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player1;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player1;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player2_attack == 'T') {
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player2;
				status_play = "Player 2's Thunder has been redirected!";
			}
			else if (player1_attack == 'T') {
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player1;
				status_play = "Player 1's Thunder has been redirected!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}

	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	door1, door2, thunder1, thunder2 = false;
}
//voids for execute scenarios
void executevsexecute() {
	if (player1_choice == 'B' and player2_choice == 'B') {//bvb
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2 / 2;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2 / 2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = multihearts_player2 / 2;
			dmg_of_player2 = ((multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2));

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);
			dmg_of_player1 = multihearts_player2 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1 / 2;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1 / 2;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);
			dmg_of_player2 = multihearts_player1 / 2;

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = multihearts_player1 / 2;
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player1 -= dmg_of_player2;
			multihearts_player2 -= dmg_of_player1;
			status_play = "Both players used Execute and received damage!";
		}
	}
	else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
		if (player1_attack == 'E' and player2_attack == 'E') {
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
		else if (player2_attack == 'E' and player1_attack == 'E') {
			dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);
			dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

			multihearts_player2 -= dmg_of_player1;
			multihearts_player1 -= dmg_of_player2;
			status_play = "Both players used Execute and received damage!";
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	execute1, execute2 = false;
}

void executevsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		executevsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1;
				dmg_of_player1 = multihearts_player2 / 2;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = multihearts_player2 / 2;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1;
				dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1;
				dmg_of_player1 = multihearts_player2 / 2;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1;
				dmg_of_player1 = multihearts_player2 / 2;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = multihearts_player2 / 2;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1;
				dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1;
				dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1;
				dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = multihearts_player1 / 2;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player2_attack == 'T' and player1_attack == 'E') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = (multihearts_player2 / 2) + ((multihearts_player2 / 2) / 2);

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Player 1 used Execute while Player 2 used Thunder!";
			}
			else if (player1_attack == 'T' and player2_attack == 'E') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = (multihearts_player1 / 2) + ((multihearts_player1 / 2) / 2);

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Player 1 used Thunder while Player 2 used Execute!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 =  "Player1 has been stunned";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Player2 has been stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Player1 has been stunned";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	execute1, execute2, thunder1, thunder2 = false;
}
//void for thnder
void thundervsthunder() {
	srand((unsigned int)time(0));

	int th1 = (rand() % 4) + 1;

	if (th1 == 1 or th1 == 2) {
		thunderdmg = true;
	}
	else if (th1 == 3 or th1 == 4) {
		thunderstun = true;
	}
	else {
		thundervsthunder();
	}

	if (thunderdmg = true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2 / 2;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Both players used Thunder and received damagae!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				multihearts_player1 -= multihearts_player2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1 / 2;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1;
				dmg_of_player1 = 1.5;

				multihearts_player1 -= dmg_of_player2;
				multihearts_player2 -= dmg_of_player1;
				status_play = "Both players used Thunder and received damage!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T' and player2_attack == 'T') {
				dmg_of_player1 = 1.5;
				dmg_of_player2 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
			else if (player2_attack == 'T' and player1_attack == 'T') {
				dmg_of_player2 = 1.5;
				dmg_of_player1 = 1.5;

				multihearts_player2 -= dmg_of_player1;
				multihearts_player1 -= dmg_of_player2;
				status_play = "Both players used Thunder and received damage!";
			}
		}
	}
	else if (thunderstun == true) {
		if (player1_choice == 'B' and player2_choice == 'B') {//bvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'C') {//bvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'B' and player2_choice == 'H') {//bvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2 / 2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'B') {//cvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'C') {//cvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'C' and player2_choice == 'H') {//cvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 0.5;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'B') {//hvb
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1 / 2;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'C') {//hvc
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 0.5;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Stunned!";
			}
		}
		else if (player1_choice == 'H' and player2_choice == 'H') {//hvh
			if (player1_attack == 'T') {
				dmg_of_player1 = 1;

				multihearts_player2 -= dmg_of_player1;
				status_debuff_player2 = "Stunned!";
			}
			else if (player2_attack == 'T') {
				dmg_of_player2 = 1;

				multihearts_player1 -= dmg_of_player2;
				status_debuff_player1 = "Stunned!";
			}
		}
	}
	if (battle == 1) {
		bvb();
	}
	else if (battle == 2) {
		bvc();
	}
	else if (battle == 3) {
		bvh();
	}
	else if (battle == 4) {
		cvb();
	}
	else if (battle == 5) {
		cvc();
	}
	else if (battle == 6) {
		cvh();
	}
	else if (battle == 7) {
		hvb();
	}
	else if (battle == 8) {
		hvc();
	}
	else if (battle == 9) {
		hvh();
	}
	thunder1, thunder2 = false;
}

void winner_declare_of_the_game() {
	system("cls");
	player1_winner = 3;
	player2_winner = 3;
	final_result1_lose = 0;
	final_result2_lose = 0;
	final_result1_win = 0;
	final_result2_win = 0;

	if (multihearts_player1 <= 0) {
		cout << "\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "\t\t\t\t\t\t													  " << endl;
		cout << "\t\t\t\t\t\t " << " PLAYER 2 " << player2_name << " HAS WON!!! " << endl;
		cout << "\t\t\t\t\t\t													  " << endl;
		cout << "\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	else if (multihearts_player2 <= 0) {
		cout << "\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "\t\t\t\t\t\t 													  " << endl;
		cout << "\t\t\t\t\t\t  " << " PLAYER 1 " << player1_name << " HAS WON!!!" << endl;
		cout << "\t\t\t\t\t\t 													  " << endl;
		cout << "\t\t\t\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}
	results_1v1_fighting_game();
}

void results_1v1_fighting_game() {
	
	points_correct1 = 10 * correct_answer1;
	points_correct2 = 10 * correct_answer2;
	points_wrong1 = 10 * wrong_answer1;
	points_wrong2 = 10 * wrong_answer2;
	accu1 = points_correct1 - points_wrong1;
	accu2 = points_correct2 - points_wrong2;

	cout << "\t\t\t\t\t\t\t\t RESULTS" << endl;
	cout << "\t\t\t\t\t\t\t\t PLAYER 1" << endl;
	cout << "\t\t\t\t\t\t\t\t" << player1_name << endl;
	cout << "\t\t\t\t\t\t CORRECT ANSWERS: " << correct_answer1 << endl;
	cout << "\t\t\t\t\t\t POINTS: " << points_correct1 << endl;
	cout << "\t\t\t\t\t\t WRONG ANSWERS: " << wrong_answer1 << endl;
	cout << "\t\t\t\t\t\t POINTS: " << points_wrong1 << endl;
	cout << "\t\t\t\t\t\t ACCUMULATED POINTS: " << accu1 << endl;
	if (multihearts_player1 <= 0) {
		cout << "\t\t\t\t\t\t LOSING POINTS: " << points_lose << endl;
		final_result1_lose = (points_correct1 - points_wrong1) + points_lose;
		cout << "\t\t\t\t\t\t FINAL RESULT: " << final_result1_lose << endl;
	}
	else if (multihearts_player2 <= 0) {
		cout << "\t\t\t\t\t\t WINNING POINTS: " << points_win << endl;
		final_result1_win = (points_correct1 - points_wrong1) + points_win;
		cout << "\t\t\t\t\t\t FINAL RESULT: " << final_result1_win << endl;
	}
	cout << "\t\t\t\t\t\t---------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t\t PLAYER 2" << endl;
	cout << "\t\t\t\t\t\t\t\t" << player2_name << endl;
	cout << "\t\t\t\t\t\t CORRECT ANSWERS: " << correct_answer2 << endl;
	cout << "\t\t\t\t\t\t POINTS: " << points_correct2 << endl;
	cout << "\t\t\t\t\t\t WRONG ANSWERS: " << wrong_answer2 << endl;
	cout << "\t\t\t\t\t\t POINTS: " << points_wrong2 << endl;
	cout << "\t\t\t\t\t\t ACCUMULATED POINTS: " << accu2 << endl;
	if (multihearts_player2 <= 0) {
		cout << "\t\t\t\t\t\t LOSING POINTS: " << points_lose << endl;
		final_result2_lose = (points_correct2 - points_wrong2) + points_lose;
		cout << "\t\t\t\t\t\t FINAL RESULT: " << final_result2_lose << endl;
	}
	else if (multihearts_player1 <= 0) {
		cout << "\t\t\t\t\t\t WINNING POINTS: " << points_win << endl;
		final_result2_win = (points_correct2 - points_wrong2) + points_win;;
		cout << "\t\t\t\t\t\t FINAL RESULT: " << final_result2_win << endl;
	}
	
	cout << "" << endl;
	cout << "Press M to go to Main Menu" << endl;
	cin >> M;
	
	switch (M){
		case 'M':
			main();
		break;
	}
}

void password_game_intro(){
	system("cls");
	cout << "\t\t\t\t\t\t\t\t Player 1 please enter your name: ";
	cin >> player1_passwordname;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t\t\t Player 2 please enter your name: ";
	cin >> player2_passwordname;
	cout << "" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t\t\t PASSWORD GAME RULES" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t\t\t GUESS THE ENCRYPTED WORDS" << endl; 
	cout << "\t\t\t\t\t\t\t\t THE SOONER YOU GET THE RIGHT ANSWER, THE HIGHER THE POINTS YOU GET" << endl;
	cout << "\t\t\t\t\t\t\t\t EACH PLAYERS WILL BE GUESSING 10 WORDS EACH" << endl;
	cout << "\t\t\t\t\t\t\t\t THERE WILL BE CLUES ALONG THE WAY" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t Press S to Start ";
	cin >> password_choice1;
	
	switch (password_choice1){
		case 'S':
			passwordmode_normal();
		break;
		default:
			password_game_intro();
	}
}
void passwordmode_normal(){
	system("cls");
	cout << "\t\t\t" << player1_passwordname << " SCORE: " << password_normalmode_points1 << "\t\t\t\t\t\t\t\t\t\t\t" << player2_passwordname << " SCORE: "<< password_normalmode_points2 << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	if (turn2 == 10){
		password_normalmode_results();
	}
	if (player1_turn == true){
	cout << "\t\t\t\t\t\t\t\t\t" << player1_passwordname << " decipher this:" << endl;
	
	srand((unsigned int)time(0));
	int word_player1 = (rand() % 20) + 1;
	if (word_player1 == 1 and one1 == true){
		passwordmode_normal();
	} else if (word_player1 == 2 and one2 == true){
		passwordmode_normal();
	}else if (word_player1 == 3 and one3 == true){
		passwordmode_normal();
	}else if (word_player1 == 4 and one4 == true){
		passwordmode_normal();
	}else if (word_player1 == 5 and one5 == true){
		passwordmode_normal();
	}else if (word_player1 == 6 and one6 == true){
		passwordmode_normal();
	}else if (word_player1 == 7 and one7 == true){
		passwordmode_normal();
	}else if (word_player1 == 8 and one8 == true){
		passwordmode_normal();
	}else if (word_player1 == 9 and one9 == true){
		passwordmode_normal();
	}else if (word_player1 == 10 and one10 == true){
		passwordmode_normal();
	}else if (word_player1 == 11 and one11 == true){
		passwordmode_normal();
	}else if (word_player1 == 12 and one12 == true){
		passwordmode_normal();
	}else if (word_player1 == 13 and one13 == true){
		passwordmode_normal();
	}else if (word_player1 == 14 and one14 == true){
		passwordmode_normal();
	}else if (word_player1 == 15 and one15 == true){
		passwordmode_normal();
	}else if (word_player1 == 16 and one16 == true){
		passwordmode_normal();
	}else if (word_player1 == 17 and one17 == true){
		passwordmode_normal();
	}else if (word_player1 == 18 and one18 == true){
		passwordmode_normal();
	}else if (word_player1 == 19 and one19 == true){
		passwordmode_normal();
	}else if (word_player1 == 20 and one20 == true){
		passwordmode_normal();
	}
	
	if (word_player1 == 1){//analysis
		one1 = true;
		cout << "\t\t\t\t\t\t\t\t\t AXXLXXIS" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "ANALYSIS"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : EXAMINATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "ANALYSIS"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : CHALICE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "ANALYSIS"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : SCIENCE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "ANALYSIS"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : DETAILED EXAMINATION OF ELEMENTS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "ANALYSIS"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: WE NEEDED THE ________ TO CONTINUE IN THE STUDY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "ANALYSIS"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 2){//evaluate
		one2 = true;
		cout << "\t\t\t\t\t\t\t\t\t EXXLXXTX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "EVALUATE"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : JUDGE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "EVALUATE"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : EIGHT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "EVALUATE"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : RESEARCH" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "EVALUATE"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : FORM AN ASSESSMENT OR IDEA" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "EVALUATE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: ________ THE SITUATION FIRST BEFORE CREATING A DECISION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "EVALUATE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 3){//chain
		one3 = true;
		cout << "\t\t\t\t\t\t\t\t\t CXXIX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "CHAIN"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : SHACKLES" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "CHAIN"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : PAIN" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "CHAIN"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : JEWELLERY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "CHAIN"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : FLEXIBLE SERIES OF METAL LINKS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "CHAIN"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: LOOK AT MY NEW JEWELLERY: A GOLDEN _____" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "CHAIN"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 4){//reproduce
		one4 = true;
		cout << "\t\t\t\t\t\t\t\t\t RXXRXXUXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "REPRODUCE"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : REPLICATE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "REPRODUCE"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : ORANGE JUICE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "REPRODUCE"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : BIOLOGY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "REPRODUCE"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : BIOLOGICAL PROCESS OF CREATING SOMETHING" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "REPRODUCE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: THE WORLD NEEDS MORE PEOPLE, WE NEED TO _________" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "REPRODUCE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	} else if (word_player1 == 5){//mechanism
		one5 = true;
		cout << "\t\t\t\t\t\t\t\t\t MXXHXXIXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "MECHANISM"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : APPARATUS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "MECHANISM"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : OPTIMISM" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "MECHANISM"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ENGINEERING" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "MECHANISM"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : SYSTEM OF PARTS WORKING TOGETHER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "MECHANISM"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: HAVE YOU UNDERSTOOD THE _________ OF THIS MACHINE?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "MECHANISM"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 6){//taxi
		one6 = true;
		cout << "\t\t\t\t\t\t\t\t\t TXXI" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "TAXI"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : CAB" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "TAXI"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : PROXY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "TAXI"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : TRANSPORTATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "TAXI"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A TYPE OF VEHICLE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "TAXI"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: DONT WORRY I WILL GET A ____ TO GO HOME" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "TAXI"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 7){//praise
		one7 = true;
		cout << "\t\t\t\t\t\t\t\t\t PXXIXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "PRAISE"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : WORSHIP" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "PRAISE"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : RACE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "PRAISE"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : RELIGION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "PRAISE"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : EXPRESS WARM APPROVAL OR ADMIRATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "PRAISE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: ______ THE LORD!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "PRAISE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 8){//publish
		one8 = true;
		cout << "\t\t\t\t\t\t\t\t\t PXXLXXH" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "PUBLISH"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : ISSUE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "PUBLISH"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : RADDISH" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "PUBLISH"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : PUBLICATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "PUBLISH"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : PREPARE AND ISSUE FOR READERSHIP" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "PUBLISH"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: WHEN ARE WE GOING TO _______ THE NEXT BOOK?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "PUBLISH"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 9){//cross
		one9 = true;
		cout << "\t\t\t\t\t\t\t\t\t CXXSX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN/VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "CROSS"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : ROOD/MEET" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "CROSS"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BOSS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "CROSS"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : RELIGION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "CROSS"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : USED IN CRUCIFIXION / PASS IN OPPOSITE DIRECTION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "CROSS"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: JESUS CARRIED THE _____" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "CROSS"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 10){//leader
		one10 = true;
		cout << "\t\t\t\t\t\t\t\t\t LXXDXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "LEADER"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : CHIEF" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "LEADER"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BEAVER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "LEADER"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : GOVERNMENT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "LEADER"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : THE PERSON WHO COMMANDS THE GROUP" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "LEADER"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: DUTERTE WAS ONCE A ______ OF THE PHILIPPINES" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "LEADER"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 11){//hospitality
		one11 = true;
		cout << "\t\t\t\t\t\t\t\t\t HXXPXXAXXTX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "HOSPITALITY"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FRIENDLINESS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "HOSPITALITY"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : MENTALITY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "HOSPITALITY"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ETHICS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "HOSPITALITY"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : REFERS TO A FRIENDLY AND GENEROUS RECEPTION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "HOSPITALITY"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: PILIPINOS ARE KNOWN FOR THERE ___________" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "HOSPITALITY"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 12){//cattle
		one12 = true;
		cout << "\t\t\t\t\t\t\t\t\t CXXTXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "CATTLE"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : COW" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "CATTLE"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BOTTLE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "CATTLE"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : FARM" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "CATTLE"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : LARGE RUMINANT ANIMAL WITH HORNS AND HOOFS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "CATTLE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: THAT BARN HAS MANY ______" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "CATTLE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 13){//smooth
		one13 = true;
		cout << "\t\t\t\t\t\t\t\t\t SXXOXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : ADJECTIVE" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "SMOOTH"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FLAT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "SMOOTH"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BOOTH" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "SMOOTH"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : SURFACES" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "SMOOTH"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : HAVING AN EVEN AND REGULAR SURFACE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "SMOOTH"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: THAT TABLE IS SO ______" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "SMOOTH"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 14){//abstract
		one14 = true;
		cout << "\t\t\t\t\t\t\t\t\t AXXTXXCX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : ADJECTIVE" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "ABSTRACT"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : PHILOSOPHICAL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "ABSTRACT"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : EXTRACT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "ABSTRACT"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ARTS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "ABSTRACT"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A WORK THAT DOES NOT PORTRAY ACTUALITY AND CONCRETENESS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "ABSTRACT"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: THE PAINTING MOUNTAIN AND SEA LOOKS SO ________" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "ABSTRACT"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 15){//fail
		one15 = true;
		cout << "\t\t\t\t\t\t\t\t\t FXXL" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "FAIL"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FLUNK" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "FAIL"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : TRAIL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "FAIL"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ACADEMICS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "FAIL"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : BE UNSUCCESSFUL IN EXAMINATIONS AND THE LIKE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "FAIL"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: MY GRADES ARE LOW, LOOKS LIKE I WILL ____" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "FAIL"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 16){//tumble
		one16 = true;
		cout << "\t\t\t\t\t\t\t\t\t TXXBXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "TUMBLE"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FALL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "TUMBLE"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BUBBLE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "TUMBLE"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : GYMNASTICS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "TUMBLE"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : FALL SUDDENLY OR CLUMSILY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "TUMBLE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: BE CAREFUL PLAYING CAUSE YOU MIIGHT ______" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "TUMBLE"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 17){//miss
		one17 = true;
		cout << "\t\t\t\t\t\t\t\t\t MXXS" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "MISS"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FAILURE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "MISS"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : SWISS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "MISS"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : SPORTS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "MISS"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : FAIL TO MAKE CONTACT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "MISS"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: HIS STANCE IS SO GOOD, IT MAKES HIM IMPOSSIBLE TO MISS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "MISS"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 18){//sting 
		one18 = true;
		cout << "\t\t\t\t\t\t\t\t\t SXXNX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "STING"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : STINGER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "STING"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : CEILING" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "STING"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ZOOLOGY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "STING"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : SMALL SHARP-POINTED ORGAN OF A BEE OR WASP" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "STING"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: BE CAREFUL OF A BEE BECAUSE IT HAS A _____ IN ITS BODY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "STING"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 19){//mild
		one19 = true;
		cout << "\t\t\t\t\t\t\t\t\t MXXD" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : ADJECTIVE" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "MILD"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : LENIENT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "MILD"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : CHILD" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "MILD"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : MEDICINE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "MILD"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : NOT SEVERE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "MILD"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: DONT WORRY IT IS JUST A ____ FEVER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "MILD"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player1 == 20){//railroad
		one20 = true;
		cout << "\t\t\t\t\t\t\t\t\t RXXLXXAX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "RAILROAD"){
			password_normalmode_points1 += 5;
			player1_turn = false;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : RAILWAY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "RAILROAD"){
			password_normalmode_points1 += 4;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : TOAD" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "RAILROAD"){
			password_normalmode_points1 += 3;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : TRANSPORTATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "RAILROAD"){
			password_normalmode_points1 += 2;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : SET OF TRACKS MADE OF STEEL RAILS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "RAILROAD"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: MOMMY, WHY DO TRAINS RUN OVER _________?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "RAILROAD"){
			password_normalmode_points1 += 1;
			player1_turn = false;
			passwordmode_normal();	
		} else {
			password_normalmode_points1 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}
	} else if (player1_turn == false){
	cout << "\t\t\t\t\t\t\t\t\t" << player2_passwordname << " decipher this:" << endl;
	srand((unsigned int)time(0));
	int word_player2 = (rand() % 20) + 1;
	if (word_player2 == 1 and two1 == true){
		passwordmode_normal();
	} else if (word_player2 == 2 and two2 == true){
		passwordmode_normal();
	}else if (word_player2 == 3 and two3 == true){
		passwordmode_normal();
	}else if (word_player2 == 4 and two4 == true){
		passwordmode_normal();
	}else if (word_player2 == 5 and two5 == true){
		passwordmode_normal();
	}else if (word_player2 == 6 and two6 == true){
		passwordmode_normal();
	}else if (word_player2 == 7 and two7 == true){
		passwordmode_normal();
	}else if (word_player2 == 8 and two8 == true){
		passwordmode_normal();
	}else if (word_player2 == 9 and two9 == true){
		passwordmode_normal();
	}else if (word_player2 == 10 and two10 == true){
		passwordmode_normal();
	}else if (word_player2 == 11 and two11 == true){
		passwordmode_normal();
	}else if (word_player2 == 12 and two12 == true){
		passwordmode_normal();
	}else if (word_player2 == 13 and two13 == true){
		passwordmode_normal();
	}else if (word_player2 == 14 and two14 == true){
		passwordmode_normal();
	}else if (word_player2 == 15 and two15 == true){
		passwordmode_normal();
	}else if (word_player2 == 16 and two16 == true){
		passwordmode_normal();
	}else if (word_player2 == 17 and two17 == true){
		passwordmode_normal();
	}else if (word_player2 == 18 and two18 == true){
		passwordmode_normal();
	}else if (word_player2 == 19 and two19 == true){
		passwordmode_normal();
	}else if (word_player2 == 20 and two20 == true){
		passwordmode_normal();
	}
	
	
	//player2
	if (word_player2 == 1){//cane
		turn2 += 1;
		two1 = true;
		cout << "\t\t\t\t\t\t\t\t\t CXXE" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "CANE"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : STICK" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "CANE"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : PAIN" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "CANE"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : MEDICINE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "CANE"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A LONG STICK TO HELP A PERSON WALK" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "CANE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: AFTER THE OPERATION, HE NEEDED A ____ TO WALK" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "CANE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 2){//glow
		turn2 += 1;
		two2 = true;
		cout << "\t\t\t\t\t\t\t\t\t GXXW" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "GLOW"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : SMOLDER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "GLOW"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : THROW" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "GLOW"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : GENERAL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "GLOW"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : GIVES OUT STEADY LIGHT WITHOUT FLAME" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "GLOW"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: MAKE IT ____!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "GLOW"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 3){//strap
		turn2 += 1;
		two3 = true;
		cout << "\t\t\t\t\t\t\t\t\t SXXAX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "STRAP"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t SYNONYM : BELT" << endl;
			cout << "\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "STRAP"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : WRAP" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "STRAP"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : FASHION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "STRAP"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A STRIP OF LEATHER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "STRAP"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: HIS BAG ____ LOOKS SO AWESOME!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "STRAP"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 4){//fascinate
		turn2 += 1;
		two4 = true;
		cout << "\t\t\t\t\t\t\t\t\t FXXCXXAXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "FASCINATE"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : ATTRACT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "FASCINATE"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : CHOCOLATE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "FASCINATE"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : LITERATURE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "FASCINATE"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : DRAW IRRESISTABLE ATTENTION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "FASCINATE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: WHAT THE HECK?! THAT GIRL IS TRYING TO _________ ME" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "FASCINATE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	} else if (word_player2 == 5){//prestige	
		turn2 += 1;
		two5 = true;
		cout << "\t\t\t\t\t\t\t\t\t PXXSXXGX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "PRESTIGE"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : STATURE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "PRESTIGE"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : SIEGE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "PRESTIGE"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : SOCIOLINGUISTICS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "PRESTIGE"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : WIDESPREAD RESPECT AND ADMIRATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "PRESTIGE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: HE EXPERIENCED A TREMENDOUS ________ AFTER HIS VICTORY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "PRESTIGE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 6){//prize
		turn2 += 1;
		two6 = true;
		cout << "\t\t\t\t\t\t\t\t\t PXXZX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "PRIZE"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : AWARD" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "PRIZE"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : RICE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "PRIZE"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : COMPETITIONS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "PRIZE"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A THING GIVEN AS A REWARD" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "PRIZE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: I WON A _____!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "PRIZE"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 7){//drift
		turn2 += 1;
		two7 = true;
		cout << "\t\t\t\t\t\t\t\t\t\t\t DXXFX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "DRIFT"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FLOAT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "DRIFT"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : SWIFT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "DRIFT"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : NAUTICAL/RACING" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "DRIFT"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : BE CARRIED SLOWLY BY WATER OR WIND" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "DRIFT"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: LOOK AT HOW THE RACECAR _____" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "DRIFT"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 8){//Mars
		turn2 += 1;
		two8 = true;
		cout << "\t\t\t\t\t\t\t\t\t MXXS" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "MARS"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : ARES" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "MARS"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BARS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "MARS"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ASTRONOMY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "MARS"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : 4TH PLANET FROM THE SUN" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "MARS"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: ELON MUSK SAID WE CAN LIVE IN ____" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "MARS"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 9){//distant
		turn2 += 1;
		two9 = true;
		cout << "\t\t\t\t\t\t\t\t\t DXXTXXT" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : ADJECTIVE" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "DISTANT"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : FARAWAY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "DISTANT"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : CONSTANT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "DISTANT"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : GENERAL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "DISTANT"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : FAR AWAY IN SPACE OR TIME" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "DISTANT"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: THE BALL AND THE WALL SHOULD BE ______ FROM ONE ANOTHER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "DISTANT"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 10){//partner
		turn2 += 1;
		two10 = true;
		cout << "\t\t\t\t\t\t\t\t\t PXXTXXR" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "PARTNER"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : ASSOCIATE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "PARTNER"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : TANNER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "PARTNER"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : COMMERCE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "PARTNER"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : PAIR OF PEOPLE ENGAGED IN THE SAME ACTIVITY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "PARTNER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: WANT TO BE MY ________ IN BUSINESS?" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "PARTNER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 11){//owner	
		turn2 += 1;
		two11 = true;
		cout << "\t\t\t\t\t\t\t\t\t OXXEX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "OWNER"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : POSSESSOR" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "OWNER"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : PLANNER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "OWNER"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : GENERAL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "OWNER"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A PERSON WHO POSSESS SOMETHING" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "OWNER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: I AM THE ______ OF THAT DOG" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "OWNER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 12){//diet
		turn2 += 1;
		two12 = true;
		cout << "\t\t\t\t\t\t\t\t\t DXXT" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "DIET"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : PROVISION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "DIET"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : YET" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "DIET"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : MEDICINE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "DIET"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : COURSE OF FOOD THAT RESTRICTS ONESELF" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "DIET"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: I NEED TO EAT ON SMALL AMOUNTS, BASICALLY ____" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "DIET"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 13){//depressed
		turn2 += 1;
		two13 = true;
		cout << "\t\t\t\t\t\t\t\t\t\t\t DXXRXXSXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t HINT : ADJECTIVE" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "DEPRESSED"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t SYNONYM : SADDENED" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "DEPRESSED"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t SOUNDS LIKE : OPPRESSED" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "DEPRESSED"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t MOSTLY USED IN : PSYCHOLOGY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "DEPRESSED"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t DEFINITION : A STATE OF GENERAL UNHAPPINESS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "DEPRESSED"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t PHRASE: I AM SO ___________" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "DEPRESSED"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = false;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 14){//captain
		turn2 += 1;
		two14 = true;
		cout << "\t\t\t\t\t\t\t\t\t CXXTXXN" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "CAPTAIN"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : COMMANDER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "CAPTAIN"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : ABSTAIN" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "CAPTAIN"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : MILITARY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "CAPTAIN"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : PERSON IN COMMAND OF A SHIP" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "CAPTAIN"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: HE IS ________ AMERICA" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "CAPTAIN"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 15){//resign
		turn2 += 1;
		two15 = true;
		cout << "\t\t\t\t\t\t\t\t\t RXXIXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "RESIGN"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : LEAVE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "RESIGN"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : DESIGN" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "RESIGN"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : BUSINESS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "RESIGN"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : VOLUNTARILY LEAVE A JOB OR POSITION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "RESIGN"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: I WANTED TO ______ FROM THIS JOB" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "RESIGN"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 16){//shower
		turn2 += 1;
		two16 = true;
		cout << "\t\t\t\t\t\t\t\t\t SXXWXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : VERB" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "SHOWER"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : DRIZZLE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "SHOWER"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : POWER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "SHOWER"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : GENERAL" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "SHOWER"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : FALL SUDDENLY OR CLUMSILY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "SHOWER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: I NEED TO TAKE A _______" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "SHOWER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 17){//recording
		turn2 += 1;
		two17 = true;
		cout << "\t\t\t\t\t\t\t\t\t RXXOXXIXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "RECORDING"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : TAPE" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "RECORDING"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : DIVIDING" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "RECORDING"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : MUSIC" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "RECORDING"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A RECORDED PERFORMANCE OR BROADCAST" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "RECORDING"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: PLAY THAT _________" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "RECORDING"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 18){//sister
		turn2 += 1;
		two18 = true;
		cout << "\t\t\t\t\t\t\t\t\t SXXTXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "SISTER"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : SIS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "SISTER"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : MISTER" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "SISTER"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : RELATIONSHIPS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "SISTER"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A WOMAN OR GIRL ASSOCIATED WITH A CHILD" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "SISTER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: SHE IS MY ______" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "SISTER"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 19){//racism
		turn2 += 1;
		two19 = true;
		cout << "\t\t\t\t\t\t\t\t\t RXXIXX" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "RACISM"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : XENOPHOBIA" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "RACISM"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : ASTIGMATISM" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "RACISM"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : SOCIETY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "RACISM"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A FORM OF PREJUDICE OR DISCRIMINATION" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "RACISM"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\tPHRASE: ______ IS A BAD THING TO DO" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "RACISM"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}else if (word_player2 == 20){//pest
		turn2 += 1;
		two20 = true;
		cout << "\t\t\t\t\t\t\t\t\t PXXT" << endl;
		cout << "" << endl;
		cout << "\t\t\t\t\t\t\t\t\t HINT : NOUN" << endl;
		cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
		cin >> answer1_1;
		
		if (answer1_1 == "PEST"){
			password_normalmode_points2 += 5;
			player1_turn = true;
			passwordmode_normal();
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 4" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SYNONYM : INSECT" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_2;
		}
		
		if (answer1_2 == "PEST"){
			password_normalmode_points2 += 4;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 3" << endl;
			cout << "\t\t\t\t\t\t\t\t\t SOUNDS LIKE : BEST" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_3;
		}
		
		if (answer1_3 == "PEST"){
			password_normalmode_points2 += 3;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 2" << endl;
			cout << "\t\t\t\t\t\t\t\t\t MOSTLY USED IN : ZOOLOGY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_4;
		}
		
		if (answer1_4 == "PEST"){
			password_normalmode_points2 += 2;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Tries Left : 1" << endl;
			cout << "\t\t\t\t\t\t\t\t\t DEFINITION : A DESTRUCTIVE INSECT MOSTLY SEEN ON CROPS" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_5;
		}
		
		if (answer1_5 == "PEST"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			cout << "" << endl;
			cout << "\t\t\t\t\t\t\t\t\t LAST TRY!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t PHRASE: THERE IS SO MANY ____ IN THE CROPS TODAY" << endl;
			cout << "\t\t\t\t\t\t\t\t\t Guess The Word: ";
			cin >> answer1_final;
		}//5th try
		
		if (answer1_final == "PEST"){
			password_normalmode_points2 += 1;
			player1_turn = true;
			passwordmode_normal();	
		} else {
			password_normalmode_points2 -=3;
			player1_turn = true;
			passwordmode_normal();	
		}//last
	}
	}	
}
void password_normalmode_results(){
	cout << " " << endl;
	cout << "\t\t\t\t\t\t\t\t RESULTS" << endl;
	cout << "\t\t\t\t\t\t\t PLAYER 1" << endl;
	cout << "\t\t\t\t\t\t\t" << player1_passwordname << endl;
	cout << "\t\t\t\t\t\t\tSCORE: " << password_normalmode_points1 << endl;
	cout << "\t\t\t\t\t\t\tWORDS: " << endl;
	if (one1 == true){
		word1 = "ANALYSIS";
		cout << "\t\t\t\t\t\t\t" << word1 << endl;
	}
	if (one2 == true){
		word2 = "EVALUATE";
		cout << "\t\t\t\t\t\t\t" << word2 << endl;
	}
	if (one3 == true){
		word3 = "CHAIN";
		cout << "\t\t\t\t\t\t\t" << word3 << endl;
	}
	if (one4 == true){
		word4 = "REPRODUCE";
		cout << "\t\t\t\t\t\t\t" << word4 << endl;
	}
	if (one5 == true){
		word5 = "MECHANISM";
		cout << "\t\t\t\t\t\t\t" << word5 << endl;
	}
	if (one6 == true){
		word6 = "TAXI";
		cout << "\t\t\t\t\t\t\t" << word6 << endl;
	}
	if (one7 == true){
		word7 = "PRAISE";
		cout << "\t\t\t\t\t\t\t" << word7 << endl;
	}
	if (one8 == true){
		word8 = "PUBLISH";
		cout << "\t\t\t\t\t\t\t" << word8 << endl;
	}
	if (one9 == true){
		word9 = "CROSS";
		cout << "\t\t\t\t\t\t\t" << word9 << endl;
	}
	if (one10 == true){
		word10 = "LEADER";
		cout << "\t\t\t\t\t\t\t" << word10 << endl;
	}
	if (one11 == true){
		word11 = "HOSPITALITY";
		cout << "\t\t\t\t\t\t\t" << word11 << endl;
	}
	if (one12 == true){
		word12 = "CATTLE";
		cout << "\t\t\t\t\t\t\t" << word12 << endl;
	}
	if (one13 == true){
		word13 = "SMOOTH";
		cout << "\t\t\t\t\t\t\t" << word13 << endl;
	}
	if (one14 == true){
		word14 = "ABSTRACT";
		cout << "\t\t\t\t\t\t\t" << word14 << endl;
	}
	if (one15 == true){
		word15 = "FAIL";
		cout << "\t\t\t\t\t\t\t" << word15 << endl;
	}
	if (one16 == true){
		word16 = "TUMBLE";
		cout << "\t\t\t\t\t\t\t" << word16 << endl;
	}
	if (one17 == true){
		word17 = "MISS";
		cout << "\t\t\t\t\t\t\t" << word17 << endl;
	}
	if (one18 == true){
		word18 = "STING";
		cout << "\t\t\t\t\t\t\t" << word18 << endl;
	}
	if (one19 == true){
		word19 = "MILD";
		cout << "\t\t\t\t\t\t\t" << word19 << endl;
	}
	if (one20 == true){
		word20 = "RAILROAD";
		cout << "\t\t\t\t\t\t\t" << word20 << endl;
	}
	cout << "" << endl;
	cout << "\t\t\t\t\t===========================================================================" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t\t\t\t\t RESULTS" << endl;
	cout << "\t\t\t\t\t\t\t PLAYER 2" << endl;
	cout << "\t\t\t\t\t\t\t" << player2_passwordname << endl;
	cout << "\t\t\t\t\t\t\tSCORE: " << password_normalmode_points2 << endl;
	cout << "\t\t\t\t\t\t\tWORDS: " << endl;
	if (two1 == true){
		word21 = "CANE";
		cout << "\t\t\t\t\t\t\t" << word21 << endl;
	}
	if (two2 == true){
		word22 = "GLOW";
		cout << "\t\t\t\t\t\t\t" << word22 << endl;
	}
	if (two3 == true){
		word23 = "STRAP";
		cout << "\t\t\t\t\t\t\t" << word23 << endl;
	}
	if (two4 == true){
		word24 = "FASCINATE";
		cout << "\t\t\t\t\t\t\t" << word24 << endl;
	}
	if (two5 == true){
		word25 = "PRESTIGE";
		cout << "\t\t\t\t\t\t\t" << word25 << endl;
	}
	if (two6 == true){
		word26 = "PRIZE";
		cout << "\t\t\t\t\t\t\t" << word26 << endl;
	}
	if (two7 == true){
		word27 = "DRIFT";
		cout << "\t\t\t\t\t\t\t" << word27 << endl;
	}
	if (two8 == true){
		word28 = "MARS";
		cout << "\t\t\t\t\t\t\t" << word28 << endl;
	}
	if (two9 == true){
		word29 = "DISTANT";
		cout << "\t\t\t\t\t\t\t" << word29 << endl;
	}
	if (two10 == true){
		word30 = "PARTNER";
		cout << "\t\t\t\t\t\t\t" << word30 << endl;
	}
	if (two11 == true){
		word31 = "OWNER";
		cout << "\t\t\t\t\t\t\t" << word31 << endl;
	}
	if (two12 == true){
		word32 = "DIET";
		cout << "\t\t\t\t\t\t\t" << word32 << endl;
	}
	if (two13 == true){
		word33 = "DEPRESSED";
		cout << "\t\t\t\t\t\t\t" << word33 << endl;
	}
	if (two14 == true){
		word34 = "CAPTAIN";
		cout << "\t\t\t\t\t\t\t" << word34 << endl;
	}
	if (two15 == true){
		word35 = "RESIGN";
		cout << "\t\t\t\t\t\t\t" << word35 << endl;
	}
	if (two16 == true){
		word36 = "SHOWER";
		cout << "\t\t\t\t\t\t\t" << word36 << endl;
	}
	if (two17 == true){
		word37 = "RECORDING";
		cout << "\t\t\t\t\t\t\t" << word37 << endl;
	}
	if (two18 == true){
		word38 = "SISTER";
		cout << "\t\t\t\t\t\t\t" << word38 << endl;
	}
	if (two19 == true){
		word39 = "RACISM";
		cout << "\t\t\t\t\t\t\t" << word39 << endl;
	}
	if (two20 == true){
		word40 = "PEST";
		cout << "\t\t\t\t\t\t\t" << word40 << endl;
	}
	
	cout << "" << endl;
	cout << "Press M to go to Main Menu" << endl;
	cin >> M;
	
	switch (M){
		case 'M':
			main();
		break;
	}
}
//for Math tic tac toe game
void instruc_for_ttt(){
	system("cls");
	cout << "\t\t\t\t\t\t\t\t PLAYER 1 type in your name: ";
	cin >> player1_name_ttt;
	
	cout << endl;
	cout << endl;
	
	cout << "\t\t\t\t\t\t\t\t PLAYER 2 type in your name: ";
	cin >> player2_name_ttt;
	
	main_for_ttt();
}
int main_for_ttt()
{
	int player = 1,i,choice_for_ttt;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;
		
		if (player!= 1 and player!= 2){
			main_for_ttt();
		}
        cout << "\t\t\t\t\t\t\t\tPlayer " << player << ", enter a number:  ";
        cin >> choice_for_ttt;
		cout << endl;
		
        if (player == 1){
        	mark = 'X';
		} else if (player == 2){
			mark = 'O';
		}
		
		math_verify = false;

        if (choice_for_ttt == 1 && square[1] == '1'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[1] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[1] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 2 && square[2] == '2'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[2] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[2] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 3 && square[3] == '3'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[3] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[3] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 4 && square[4] == '4'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[4] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[4] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 5 && square[5] == '5'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[5] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[5] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 6 && square[6] == '6'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[6] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[6] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 7 && square[7] == '7'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[7] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[7] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 8 && square[8] == '8'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[8] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[8] = mark;
            	player2_ttt_score += 10;
			}
        }else if (choice_for_ttt == 9 && square[9] == '9'){
			math_randomizer();
			if (player == 1 and math_verify == false){
				player2_ttt_score += 5;
				board();
			} else if (player == 2 and math_verify == false){
				player1_ttt_score += 5;
				board();
			} else if (player == 1 and math_verify == true){
            	square[9] = mark;
            	player1_ttt_score += 10;
        	} else if (player == 2 and math_verify == true){
        		square[9] = mark;
            	player2_ttt_score += 10;
			}
        }else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)
        if (player != 1 and player != 2){
        	cout << "==>\aPlayer 2 " << player2_name_ttt << " win " << endl;
        	cout << "==>\aPlayer 2 score: " << player2_ttt_score << endl;
		} else if (player == 2){
    		cout << "==>\aPlayer 1 " << player1_name_ttt << " win " << endl;
        	cout << "==>\aPlayer 1 score: " << player1_ttt_score << endl;
		} 
   
    
    cout << "Press M to Main Menu ";
    cin >> main_menu;
    switch(main_menu){
    	case 'M':
    		main();
    	break;
	}
    return 0;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

void board()
{
    system("cls");
    cout << "\n\n\t\t\t\t\t\t\t\t\tTic Tac Toe\n\n";

    cout << "\t\t\t\t\t\t\t\tPlayer 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "\t\t\t\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "\t\t\t\t\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t\t\t\t\t     |     |     " << endl;

    cout << "\t\t\t\t\t\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "\t\t\t\t\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t\t\t\t\t     |     |     " << endl;

    cout << "\t\t\t\t\t\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "\t\t\t\t\t\t\t\t\t     |     |     " << endl << endl;
}

void math_randomizer(){
	srand((unsigned int)time(0));
	int math_questions = (rand() % 20) + 1;
	
	if (math_questions == 1){
		cout << "\t\t\t\t\t\t\t\tWhat is the algebraic expression for 'the sum of n and 9'?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. n-9" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. n+9" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. n/9" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 9n" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 2){
		cout << "\t\t\t\t\t\t\t\tWhat is the algebraic expression for 'the difference of r and 3'?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. r/3" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. r+3" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. r-3" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 3r" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer; 
	} else if (math_questions == 3){
		cout << "\t\t\t\t\t\t\t\tWhat word phrase can you use to represent 5x + 2?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. five times the sum of a number x and two" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. a number x times the sum of five and two" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. two times the sum of a number x and five" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. the sum of five times a number x and two" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 4){
		cout << "\t\t\t\t\t\t\t\tEvaluate u + xy, for u = 18 , x = 10 , and y = 8" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. 188" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. 36" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. 98" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 224" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 5){
		cout << "\t\t\t\t\t\t\t\tWhich property is illustrated by this statement.8 + 8.3 = 8.3 + 8" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. Inverse Property of Multiplication" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. Commutative Property of Addition" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. Inverse Property of Addition" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. Associative Property of Addition" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 6){
		cout << "\t\t\t\t\t\t\t\tSimplify. (1/3)(21m + 27)" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. 63m + 9" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. 7m + 9" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. 7m + 81" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 7m + 27" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 7){
		cout << "\t\t\t\t\t\t\t\tSimplify. 1.7m^2 + 6.5n - 4n + 2.5m^2 - n" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. 4.2m^2 + 1.5n" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. 4.2m^2 - 1.5n" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. 1.5m^2 - 4.2n" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 1.5m^2 + 4.2n" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 8){
		cout << "\t\t\t\t\t\t\t\tIs x = 1 a solution of the equation 2 - 8x = -6" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. yes" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. no" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 9){
		cout << "\t\t\t\t\t\t\t\tSolve: -n + 8 = -3(n - 4)" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. All real numbers" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. -1" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. 2" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. -7" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 10){
		cout << "\t\t\t\t\t\t\t\tSolve for p. 5p - 14 = 8p + 4" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. -6" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. -10/3" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. 18/13" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 4" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 11){
		cout << "\t\t\t\t\t\t\t\tSolve for x. 2 (-x -4) = 4x + 16" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. 4" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. 3" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. -3" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. -4" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 12){
		cout << "\t\t\t\t\t\t\t\tSolve for a. -11 -5a = 6(5a + 4)" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. -1" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. -2" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. -3" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. -4" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 13){
		cout << "\t\t\t\t\t\t\t\tSolve for x. 17x + -12 = 114 + 3x" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. 96" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. 9" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. -9" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. 59" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 14){
		cout << "\t\t\t\t\t\t\t\tSolve for R. pV = nRT" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. R = pV/nT" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. R = p/n + V/T" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. R = pV - nT" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. R = (pV - n) / T" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 15){
		cout << "\t\t\t\t\t\t\t\tSolve for F. S = 3F - 24" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. F = S/3 + 24" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. F = (S + 24) / 3" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. F = 3S + 24" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. F = 3(S + 24)" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 16){
		cout << "\t\t\t\t\t\t\t\tWhat is the domain for (1,2)(2,3)(3,4)(4,5)?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. R = {1,2,3,4}" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. R = {2,3,4,5}" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. R = {1,2,3,4,5}" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. R = {(1,2)(2,3)(3,4)(4,5)}" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 17){
		cout << "\t\t\t\t\t\t\t\tWhat is the range for (1,2)(2,3)(3,4)(4,5)?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. R = {1,2,3,4}" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. R = {2,3,4,5}" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. R = {1,2,3,4,5}" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. R = {(1,2)(2,3)(3,4)(4,5)}" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 18){
		cout << "\t\t\t\t\t\t\t\tSimplify. 5x + 7x" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. R = 2x" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. R = 12x" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. R = -2x" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. R = -12x" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 19){
		cout << "\t\t\t\t\t\t\t\tWhat property is being used in the equation (-3 + 2) + 1 = -3 + (2 + 1)?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. R = Associative" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. R = Commutative" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. R = Inverse" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. R = Symmetric" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	} else if (math_questions == 20){
		cout << "\t\t\t\t\t\t\t\tWhat property is being used in the equation -8 (2x + 3) = -16x - 24?" << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t\ta. R = Commutative" << endl;
		cout << "\t\t\t\t\t\t\t\t\tb. R = Distributive" << endl;
		cout << "\t\t\t\t\t\t\t\t\tc. R = Inverse" << endl;
		cout << "\t\t\t\t\t\t\t\t\td. R = Reflexive" << endl;
		cout << "\t\t\t\t\t\t\t\tEnter your answer: ";
		cin >> math_answer;
	}
	
	if (math_questions == 1 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 2 && math_answer == 'c'){
		math_verify = true;
	} else if (math_questions == 3 && math_answer == 'd'){
		math_verify = true;
	} else if (math_questions == 4 && math_answer == 'c'){
		math_verify = true;
	} else if (math_questions == 5 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 6 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 7 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 8 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 9 && math_answer == 'c'){
		math_verify = true;
	} else if (math_questions == 10 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 11 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 12 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 13 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 14 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 15 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 16 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 17 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 18 && math_answer == 'b'){
		math_verify = true;
	} else if (math_questions == 19 && math_answer == 'a'){
		math_verify = true;
	} else if (math_questions == 20 && math_answer == 'b'){
		math_verify = true;
	}
}

//leaderboards
void leadebroard_for_1v1(){
	system("cls");
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t L * E * A * D * E * R * B * O * A * R * D * S" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t 1 * V * 1 * F * I * G * H * T * I * N * G" << endl;
	cout << "\t\t\t\t\t\t\t\t NAME \t\t\t\t\t\t\t\t SCORE" << endl;
	cout << endl;
	if (final_result1_win != 0){
		cout << "\t\t\t\t\t\t\t\t1.)" << player1_name << "\t\t\t\t\t\t\t\t" << final_result1_win << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t2.)" << player2_name << "\t\t\t\t\t\t\t\t" << final_result2_lose << endl;
	} else if (final_result1_lose != 0){
		cout << "\t\t\t\t\t\t\t\t1.)" << player2_name << "\t\t\t\t\t\t\t\t" << final_result2_win << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t2.)" << player1_name << "\t\t\t\t\t\t\t\t" << final_result1_lose << endl;
	}
	
	cout << endl;
	cout << "\t\t\t\t\t\t\t\tPress N for Next: ";
	cin >> next_char;
	
	switch(next_char){
		case 'N':
			leaderboard_for_password();
			break;
		default:
			main();
	}
}
void leaderboard_for_password(){
	system("cls");
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t L * E * A * D * E * R * B * O * A * R * D * S" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t P * A * S * S * W * O * R * D * G * A * M * E" << endl;
	cout << "\t\t\t\t\t\t\t\t NAME \t\t\t\t\t\t\t\t SCORE" << endl;
	cout << endl;
	if (password_normalmode_points1 > password_normalmode_points2){
		cout << "\t\t\t\t\t\t\t\t1.)" << player1_passwordname << "\t\t\t\t\t\t\t\t" << password_normalmode_points1 << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t2.)" << player2_passwordname << "\t\t\t\t\t\t\t\t" << password_normalmode_points2 << endl;
	} else if (password_normalmode_points2 > password_normalmode_points1){
		cout << "\t\t\t\t\t\t\t\t1.)" << player2_passwordname << "\t\t\t\t\t\t\t\t" << password_normalmode_points2 << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t2.)" << player1_passwordname << "\t\t\t\t\t\t\t\t" << password_normalmode_points1 << endl;
	}
	
	cout << endl;
	cout << "\t\t\t\t\t\t\t\tPress N for Next and P for Prev: ";
	cin >> next_char;
	
	switch(next_char){
		case 'N':
			leaderboard_for_ttt();
			break;
		case 'P':
			leadebroard_for_1v1();
			break;
		default:
			main();
	}
}
void leaderboard_for_ttt(){
	system("cls");
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t L * E * A * D * E * R * B * O * A * R * D * S" << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\t T * I * C * T * A * C * T * O * E" << endl;
	cout << "\t\t\t\t\t\t\t\t NAME \t\t\t\t\t\t\t\t SCORE" << endl;
	cout << endl;
	if (player1_ttt_score > player2_ttt_score){
		cout << "\t\t\t\t\t\t\t\t1.)" << player1_name_ttt << "\t\t\t\t\t\t\t\t" << player1_ttt_score << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t2.)" << player2_name_ttt << "\t\t\t\t\t\t\t\t" << player2_ttt_score << endl;
	} else if (player2_ttt_score > player1_ttt_score){
		cout << "\t\t\t\t\t\t\t\t1.)" << player2_name_ttt << "\t\t\t\t\t\t\t\t" << player2_ttt_score << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t\t2.)" << player1_name_ttt << "\t\t\t\t\t\t\t\t" << player1_ttt_score << endl;
	}
	
	cout << endl;
	cout << "\t\t\t\t\t\t\t\tPress P for Prev: ";
	cin >> next_char;
	
	switch(next_char){
		case 'P':
			leaderboard_for_password();
			break;
		default:
			main();
	}
}
