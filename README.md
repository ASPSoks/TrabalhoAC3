# Análise do Impacto do Tamanho da Cache L2 na Redução do Gargalo de Memória em AlgoritmosMatriciais
Trabalho realizado para a disciplina Arquitetura de Computadores 3 por
 - André Scianni Pereira
 - Davi Caetano Tavares Ramo
 - Enzo Moraes Martini
 - Lucas Pereira Rangel de Carvalho

# Ambiente
Testes e simulações foram realizadas usando o simulador Sniper, em um Linux nativo com processador AMD® Ryzen 7 3700u with radeon vega mobile gfx × 8 

# Instruções de execução
Para executar os testes, clonar o repositório e, após fazer a instalação correta do Sniper e todos os componentes necessários em uma VM, WSL ou Linux nativo, executar no terminal:
- cd snipersim

Para ver a redução dos Stalls de Memória (CPI Stack): 
./tools/cpistack.py -d res_L2_64K

Para o IPC:
./tools/dumpstats.py -d res_L2_64K | grep "ipc"

Para o Miss Rate da L2:
./tools/dumpstats.py -d res_L2_64K | grep "L2.miss-rate"

Esses comandos retornarão os dados para a cache L2 de 64Kb, para mudar para os outros tamanhos simulados, variar "64K" para "256K", "1024K" ou "4096K".
