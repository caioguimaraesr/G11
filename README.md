# Monitoramento de Poluição Sonora

## Descrição

Este protótipo foi desenvolvido para monitorar o nível de poluição sonora em tempo real, utilizando um microfone conectado ao Arduino. O sistema mede a intensidade do som e indica o nível de poluição sonora visualmente por meio de fitas de LEDs. A cor dos LEDs varia dependendo da intensidade do som, ajudando na conscientização sobre os níveis de ruído ambiental.

### Níveis de Ruído:
- **Nível Seguro (Verde):** O ambiente está dentro de limites aceitáveis para a saúde auditiva e conforto das pessoas.
- **Nível de Atenção (Laranja):** O som está moderado e pode causar desconforto prolongado.
- **Nível Perigoso (Vermelho):** O ruído é alto o suficiente para ser prejudicial e pode causar danos à audição.

## Funcionalidade

- **Microfone**: Mede o nível de som no ambiente.
- **Fitas de LEDs**: Indicam visualmente o nível de poluição sonora:
  - Verde para níveis seguros.
  - Laranja para níveis de atenção.
  - Vermelho para níveis perigosos.
  
## Componentes Necessários

- 1 Arduino (qualquer modelo compatível, como Arduino Uno)
- 1 Microfone analógico
- 2 Fitas de LEDs RGB (com base na biblioteca Adafruit_NeoPixel)
- 1 Resistor (para o microfone, se necessário)
- Fios e protoboard para a montagem

## Conexões

- **MIC_PIN**: Conecte o microfone ao pino analógico A0 do Arduino.
- **LED_PIN e LED_PIN_2**: Conecte as fitas de LEDs aos pinos digitais 6 e 7 (ou qualquer outro pino digital de sua escolha, desde que altere no código).
- Certifique-se de conectar os LEDs e o microfone corretamente aos pinos indicados no código.

## Como Usar

1. **Configuração do Hardware**:
   - Conecte o microfone e as fitas de LEDs ao Arduino conforme descrito nas conexões acima.
   
2. **Upload do Código**:
   - Baixe o código fornecido no repositório e faça o upload para o seu Arduino usando a IDE do Arduino.
   
3. **Monitoramento**:
   - Após o upload do código, os LEDs começarão a acender de acordo com o nível de ruído detectado.
   - **Verde**: O nível de som está seguro.
   - **Laranja**: O som está moderado.
   - **Vermelho**: O som é alto e pode ser prejudicial.
   
4. **Observação**:
   - O valor do som será exibido no monitor serial, permitindo acompanhar as leituras em tempo real.
   - O atraso de 250ms entre as leituras evita respostas muito rápidas ou instáveis.