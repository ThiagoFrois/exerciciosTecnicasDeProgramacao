#include "DAOArquivo.hpp"

DAOArquivo::DAOArquivo():
    DAOAbstrato(), arquivoSaida()
{
    
}

DAOArquivo::~DAOArquivo(){

}

const std::string DAOArquivo::lerNome(){
    std::string linha = getLinha();
    int contAtual = 0;
    while(linha[contAtual] != ' '){
        contAtual++;
    }
    return linha.erase(contAtual);
}

const int DAOArquivo::lerNota1(){
    std::string linha = getLinha();
    //contAtual++;
    //contInicio = contAtual;
    int contAtual = 0;
    int contInicio;
    int i = 0;
    while(linha[contAtual] != ' '){
        contAtual++;
        if(linha[contAtual] == ' ' && i != 1){
            i++;
            contAtual++;
            contInicio = contAtual;
        }
    }
    /*
    while(linha[contAtual] != ' '){
        contAtual++;
    }
    */
    //corta a string e trasnforma ela em um int
    return std::stoi((linha.erase(contAtual)).erase(0, contInicio));
}

const int DAOArquivo::lerNota2(){
    std::string linha = getLinha();
    //contInicio = contAtual + 1;
    int contAtual = 0;
    int contInicio;
    int i = 0;
    while(linha[contAtual] != ' '){
        contAtual++;
        if(linha[contAtual] == ' ' && i != 2){
            i++;
            contAtual++;
            if(i == 2){
                contInicio = contAtual;
                break;
            }
        }
    }
    //corta a string e trasnforma ela em um int
    return std::stoi(linha.erase(0, contInicio));
}

std::string DAOArquivo::getLinha(){
    arquivoSaida.open("Dados.DAO");
    if(!arquivoSaida.is_open()){
        std::cout << "Nao foi possivel abrir o arquivo!" << std::endl;
        exit(1);
    }
    std::string linha;
    getline(arquivoSaida, linha);
    arquivoSaida.close();
    return linha;
}