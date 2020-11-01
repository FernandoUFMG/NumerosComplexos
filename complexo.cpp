// Copyright 2018 Universidade Federal de Minas Gerais (UFMG)

#include "complexo.h"

#include <cmath>

void Complexo::calculaPolar(double a, double b){
  r = modulo();
  teta = atan2(b,a);  
}
Complexo::Complexo() {
  real_ = 0.0;
  imag_ = 0.0;
  calculaPolar(real_,imag_);
}

Complexo::Complexo(double a) {
  real_ = a;
  imag_ = 0.0;
calculaPolar(real_,imag_);
}

Complexo::Complexo(double a, double b) {
  real_ = a;
  imag_ = b;
  calculaPolar(real_,imag_);
}

double Complexo::real() const {
  return real_;
}

double Complexo::imag() const {
  return imag_;
}
double Complexo::raio() const {
    return r;
}
double Complexo::angulo() const {
    return teta;
}

bool Complexo::operator==(Complexo x) const {
  return r == x.r && teta == x.teta;
}

void Complexo::operator=(Complexo x) {
  real_ = x.real_;
  imag_ = x.imag_;
}

double Complexo::modulo() const {
  return sqrt(real_*real_ + imag_*imag_);
}

Complexo Complexo::conjugado() const {
  Complexo c(real_, -imag_);
  return c;
}

Complexo Complexo::operator-() const {
  Complexo c(-real_, -imag_);
  return c;
}

Complexo Complexo::inverso() const {
  double divisor = real_*real_ + imag_*imag_;
  Complexo i(real_ / divisor, -imag_ / divisor);
  return i;
}

Complexo Complexo::operator+(Complexo y) const {
  Complexo s(real_ + y.real_, (imag_ + y.imag_));
  return s;
}

Complexo Complexo::operator-(Complexo y) const {
  return (*this) + -y;
}

Complexo Complexo::operator*(Complexo y) const {
  Complexo p(real_ * y.real_ - imag_ * y.imag_, real_ * y.imag_ + imag_ * y.real_);
  return p;
}

Complexo Complexo::operator/(Complexo y) const {
  return (*this) * y.inverso();
}
