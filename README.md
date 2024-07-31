# Medidor de Distância com HC-SR04

Este repositório contém um código de exemplo para usar o sensor ultrassônico HC-SR04 com um microcontrolador Arduino para medir distâncias e exibir os resultados no monitor serial.

## Componentes Necessários
- Sensor Ultrassônico HC-SR04
- Microcontrolador Arduino (por exemplo, Arduino Uno)
- Fios de Conexão

## Diagrama de Conexão
- HC-SR04 Trigger -> Pino Digital 4 do Arduino
- HC-SR04 Echo -> Pino Digital 5 do Arduino
- VCC -> 5V do Arduino
- GND -> GND do Arduino

## Funcionamento
- O código gera um pulso de 10 microssegundos no pino Trigger do HC-SR04.
- O sensor emite um sinal ultrassônico e mede o tempo que leva para o sinal refletido voltar.
- O tempo medido é convertido em distância usando a fórmula:

```scss
distância (cm) = (duração (µs) / 2) * 0.0344
```
- A distância calculada é exibida no monitor serial do Arduino a cada 500 milissegundos.

## Instalação

1. Conecte o HC-SR04 ao Arduino conforme descrito no Diagrama de Conexão.
2. Abra o Arduino IDE e crie um novo arquivo.
3. Cole o código acima no arquivo.
4. Selecione a placa e a porta correta no Arduino IDE.
5. Faça o upload do código para o seu Arduino.
6. Abra o Monitor Serial no Arduino IDE (defina a taxa de bauds para 9600 bps) para ver a distância medida pelo sensor.
 
## Referências

- [Datasheet do HC-SR04](http://www.datasheet.com)
- [Documentação do Arduino](https://docs.arduino.cc/)

