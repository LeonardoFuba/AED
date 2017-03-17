/*
 * Stack.cpp
 *
 */
#include "Stack.h"

Stack::Stack()
// pr�-condi��o: nenhuma
// p�s-condi��o: Pilha � criada e iniciada como vazia
{
  Top = 0;
}

bool Stack::Empty()
// pr�-condi��o: Pilha j� tenha sido criada
// p�s-condi��o: fun��o retorna true se a pilha est� vazia; false caso contr�rio
{
  return (Top == 0);
}

bool Stack::Full()
// pr�-condi��o: Pilha j� tenha sido criada
// p�s-condi��o: fun��o retorna true se a pilha est� cheia; false caso contr�rio
{
  return (Top == MaxStack);
}

void Stack::Push(StackEntry x)
// pr�-condi��o: Pilha S j� tenha sido criada
// p�s-condi��o: O item x � armazenado no topo da pilha
{
  if (Full())
  { cout << "Pilha Cheia" << endl;
    abort();
  }
  Top++;
  Entry[Top] = x;
}

void Stack::Pop(StackEntry &x)
// pr�-condi��o: Pilha j� tenha sido criada e n�o est� vazia
// p�s-condi��o: O item no topo da pilha � removido e seu valor � retornado na vari�vel x
{
  if (Empty())
  { cout << "Pilha Vazia" << endl;
    abort();
  }
  x = Entry[Top] ;
  Top--;
}

int Stack::Size()
// pr�-condi��o: Pilha j� tenha sido criada
// p�s-condi��o: retorna o numero de elementos da pilha
{  return Top;
}


void Stack::Clear()
// pr�-condi��o: Pilha j� tenha sido criada
// p�s-condi��o: Esvazia o conteudo da pilha
{  Top = 0;
}




