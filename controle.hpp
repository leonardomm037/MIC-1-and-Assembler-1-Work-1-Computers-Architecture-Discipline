#ifndef CONTROLE_HPP_INCLUDED
#define CONTROLE_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

typedef unsigned int word;
typedef unsigned char byte;
typedef unsigned long long microcode;

typedef struct mnemonico;



void controle(char* opcode);
void lerArquivos (vector<byte> &prog, microcode &rom);
vector <mnemonico> criaMne ();
int procuraMnemonico(byte endereco, vector<mnemonico> mnemonicos);

#endif // CONTROLE_HPP_INCLUDED
