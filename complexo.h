// Copyright 2018 Universidade Federal de Minas Gerais (UFMG)

#ifndef TRUNK_COMPLEXO_EUCLIDIANO_SRC_COMPLEXO_H_
#define TRUNK_COMPLEXO_EUCLIDIANO_SRC_COMPLEXO_H_

// Representa um número complexo.
class Complexo {
 public:
  // Cria o número complexo 0 + 0i.
  Complexo();

  // Cria o número complexo a + 0i.
  Complexo(double a);

  // Cria o número complexo a + bi.
  Complexo(double a, double b);

  // Retorna a parte real do número complexo corrente.
  double real() const;

  // Retorna a parte imaginária do número complexo corrente.
  double imag() const;
  
  // Retorna o Raio do número complexo corrente
  double raio() const;
  
  // Retorna o angulo do número complexo corrente
  double angulo() const;
  // Testa se o número complexo corrente é igual a 'x'.
  bool operator==(Complexo x) const;

  // Atribui 'x' ao número complexo corrente.
  void operator=(Complexo x);

  // Retorna o módulo do número complexo corrente.
  double modulo() const;

  // Retorna o conjugado do número complexo corrente.
  Complexo conjugado() const;

  // Retorna o simétrico do número complexo corrente.
  Complexo operator-() const;

  // Retorna o inverso multiplicativo do número complexo corrente.
  Complexo inverso() const;

  // Soma o número complexo corrente com 'y' e retorna o resultado.
  Complexo operator+(Complexo y) const;

  // Subtrai o número complexo corrente por 'y' e retorna o resultado.
  Complexo operator-(Complexo y) const;

  // Multiplica o número complexo corrente com 'y' e retorna o resultado.
  Complexo operator*(Complexo y) const;

  // Divide o número complexo corrente por 'y' e retorna o resultado.
  Complexo operator/(Complexo y) const;
  
  void setAngulo(double);
  void setRaio(double);
 private:
 void calculaPolar();
  // Parte real;
  double real_;

  // Parte imaginária.
  double imag_;
  double r;
  long double teta;
  friend class Teste;
};

#endif  // TRUNK_COMPLEXO_EUCLIDIANO_SRC_COMPLEXO_H_
