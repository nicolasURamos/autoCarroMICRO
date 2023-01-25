# Projeto Supervisionado 2 - Carrinho + Sensor ultra sônico

Utilizando o código fonte disponibilizado para
controlar o Carrinho Arduíno 200RPM, faça
alterações para que o carro da sua dupla funcione de
forma autônoma. Você poderá utilizar a biblioteca
disponibilizada para o sensor ultrassônico e, desta
forma, adicionar a funcionalidade de identificação de
obstáculos frontais. Crie um sistema completo com o
carro e o sensor ultrassônico, onde a heurística
implementada deverá auxiliar seu veículo autônomo
a percorrer o labirinto definido abaixo, evitando 
choques com as paredes do labirinto.

A atividade envolverá minimamente o chassi 2wd, pelo menos 1 sensor ultrassônico.
• O objetivo da atividade é a partir dos sketches de exemplo do chassi 2wd e as bibliotecas e sketches de exemplo do
sensor ultrassônico, construir um veículo autônomo que seja capaz de realizar a travessia em um labirinto prédefinido sem colisões. Para isso, o aluno deverá conceber uma lógica de corrida para o carrinho e utilizar pelo menos
o sensor ultrassônico para o reconhecimento de obstáculos.
• Será possível em cada projeto o acréscimo de no máximo dois sensores mais para orientação do carrinho além do
sensor ultrassônico.
• A pista selecionada deverá ser reproduzida da melhor maneira possível e a melhor(es) volta(s) (máximo 2) deverá ser
gravada e enviada para a competição de carrinhos a ser realizada no seminário de apresentação dos projetos
supervisionados.
• Cada colisão nas paredes da pista implicará no acréscimo de 6 segundos no tempo final do competidor.
• Vencerá quem conseguir cumprir o trajeto no menor tempo possível e com o menor número de colisões.
• Sugiro fortemente que inicialmente testem o código original do carrinho para entender como funciona sua lógica, e
separadamente o circuito com o sensor ultrassônico. Em um segundo momento realizem a união dos elementos no
chassi.
• Diversos problemas inerentes a questão da alimentação surgirão, no caso do motor dc que é alimentado por 4 pilhas
AA (+-6V) alterações podem ser realizadas (adicionar bateria de 9V no lugar, power bank, etc..). Além disso, para
alimentação do arduino e circuitos ainda é necessária uma bateria de 9V conectada pelo cabinho de alimentação,
conectado diretamente ao plug de alimentação do arduino.
• Alterações tanto na questão de alimentação, quanto na configuração do carrinho são permitidas, desde que
avisadas previamente e que não descaracterize o chassi original. 

A atividade envolverá minimamente o chassi 2wd, pelo menos 1 sensor ultrassônico.
• O objetivo da atividade é a partir dos sketches de exemplo do chassi 2wd e as bibliotecas e sketches de exemplo do
sensor ultrassônico, construir um veículo autônomo que seja capaz de realizar a travessia em um labirinto prédefinido sem colisões. Para isso, o aluno deverá conceber uma lógica de corrida para o carrinho e utilizar pelo menos
o sensor ultrassônico para o reconhecimento de obstáculos.
• Será possível em cada projeto o acréscimo de no máximo dois sensores mais para orientação do carrinho além do
sensor ultrassônico.
• A pista selecionada deverá ser reproduzida da melhor maneira possível e a melhor(es) volta(s) (máximo 2) deverá ser
gravada e enviada para a competição de carrinhos a ser realizada no seminário de apresentação dos projetos
supervisionados.
• Cada colisão nas paredes da pista implicará no acréscimo de 6 segundos no tempo final do competidor.
• Vencerá quem conseguir cumprir o trajeto no menor tempo possível e com o menor número de colisões.
• Sugiro fortemente que inicialmente testem o código original do carrinho para entender como funciona sua lógica, e
separadamente o circuito com o sensor ultrassônico. Em um segundo momento realizem a união dos elementos no
chassi.
• Diversos problemas inerentes a questão da alimentação surgirão, no caso do motor dc que é alimentado por 4 pilhas
AA (+-6V) alterações podem ser realizadas (adicionar bateria de 9V no lugar, power bank, etc..). Além disso, para
alimentação do arduino e circuitos ainda é necessária uma bateria de 9V conectada pelo cabinho de alimentação,
conectado diretamente ao plug de alimentação do arduino.
• Alterações tanto na questão de alimentação, quanto na configuração do carrinho são permitidas, desde que
avisadas previamente e que não descaracterize o chassi original. 
• O tempo estimado formal para a atividade será de 15 dias (4 aulas), mas as modificações e ajustes podem ser
realizados até o dia do seminário final.

## Link do código fonte do carro:
http://blog.usinainfo.com.br/carrinho-arduinocontrolado-por-bluetooth-e-sistema-android/
Código Fonte do Carro: 
https://www.usinainfo.com.br/index.php?controller=attac
hment&id_attachment=494
Obs: Desabilite o módulo bluetooth; utilize apenas os 
motores e o sensor ultrassônico.

## Referências Carro:
• Datasheet:
http://img.filipeflop.com/files/download/Datasheet_HCSR04.pdf
• Biblioteca e Exemplo:
https://www.filipeflop.com/blog/sensor-ultrassonico-hc-sr04-ao-arduino/
https://github.com/filipeflop/Ultrasonic
