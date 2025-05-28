# Controle de LEDs e Leitura de Potenciômetro com Botão e Serial

Este projeto utiliza um Arduino para controlar dois LEDs (vermelho e verde) com comandos via **Serial Monitor** e permite a leitura de um potenciômetro quando um botão físico é pressionado.

---

## Funcionalidades

- Leitura do Potenciômetro (A2): Converte o valor lido (0–1023) para o intervalo de 10 a 180.
- Botão (Pino 8): Quando pressionado (nível LOW), exibe no Serial Monitor o valor mapeado do
potenciômetro
- LED Vermelho (Pino 10):
    - Liga com comando ```cpp'd'``` via Serial
    - Desliga com o comando ```cpp 'c'```
- LED Verde (Pino 9):
    - Liga com comando ```cpp'e'``` via Serial
    - Desliga com comando ```cpp'f'```

---

## Conexões

|Componentes   |Pino arduino|
|--------------|------------|
|Potenciômetro |A2          |
|Botão         |8(PULLUP)   |
|LED Vermelho  |10          |
|LED Verde     |9           |

---

## Comandos vis Serial Monitor

Envie os seguintes caracteres pelo **Serial Monitor (9600 baud)** para controlar os LEDs:
- ```cppe``` - Liga LED Verde
- ```cppf``` - Desliga LED Verde
- ```cppd``` - Liga LED Vermelho
- ```cppc``` - Desliga LED Vermelho

## Observações

- O botão está configurado com **INPUT_PULLUP**, então seu estado será LOW quando pressionado.
- O valor do potenciômetro é exibido somente quando o botão é pressionado.