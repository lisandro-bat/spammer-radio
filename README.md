# 📻 CS 1.6 Radio Spammer 

Este proyecto es una **""""macro""""** desarrollada con fines de aprendizaje. Su objetivo es automatizar el envío de mensajes de radio en el videojuego **Counter-Strike 1.6**, utilizando únicamente funciones de entrada de teclado simuladas, **sin modificar el juego ni inyectar código externo**.

> ⚠️ **Este proyecto NO es un cheat.** No modifica archivos del juego, no utiliza hooks ni DLLs, ni interfiere con el motor del juego. Solo simula teclas como lo haría un teclado físico.

---

## 🚀 ¿Qué hace?

La macro simula comandos de radio como:

- ` Get out of there, it's gonna blow!`


---


## ⚙️ Requisitos

- Windows 10/11.
- Counter-Strike 1.6 (Steam o No-Steam).

---

## 🔧 Instalación

- descargar el spammer.exe
- ejecutar cs 1.6
- abrir la consola y poner el siguiente comando: bind F1 "getout"
- ejecutar el spammer.exe 
- entrar a cualquier server y apretar F1
- si lo queres apagar solo tocas F1 denuevo y listo

---


## CODIGO


#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

void tecla();

int main()
{
	
	while(1)
	{
		if(GetKeyState(VK_F1))
		{
			tecla();
		}
			
		Sleep(1);
	}

}

void tecla()
{
	INPUT tc[2] = {0};
	
	tc[0].type = INPUT_KEYBOARD;
	tc[0].ki.wScan = 0x3C;
	tc[0].ki.dwFlags = KEYEVENTF_SCANCODE;
	
	tc[1].type = INPUT_KEYBOARD;
	tc[1].ki.wScan = 0x3C;
	tc[1].ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;
	
	SendInput(2,tc,sizeof(INPUT));
}




## CODIGO BY KEYGEN2009 | https://www.youtube.com/@KeyGen2009 
