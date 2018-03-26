{"changed":true,"filter":false,"title":"board.c","tooltip":"/src/board.c","value":"#include <stdio.h>\n#include <stdlib.h>\n\n#include \"board.h\"\n\nbool is_valid_square(Board *board, int x, int y)\n{\n\tif (x < 0 || y < 0) return false;\n\tif (x >= BOARD_LENGTH || y >= BOARD_HEIGHT) return false;\n\n\treturn board->boardSquares[x][y].walkable;\n}\n\n// 바꿔야 할 부분 2\nbool is_tele_square(int x, int y)\n{\n\tif (x == -1 && y == 14) return true;\n\telse if (x == -1 && y == 3) return true;\t\n\telse if (x == -1 && y == 28) return true;\n\telse if (x == 28 && y == 3) return true;\n\telse if (x == 28 && y == 28) return true;\n\telse if (x == 28 && y == 14) return true;\n\telse return false;\n}\n\nbool is_ghost_noup_square(int x, int y)\n{\n\t//squares are:\n\t// (12, 22) (14, 22)\n\t// (12, 10) (14, 10)\n\treturn (x == 12 && y == 22) || (x == 15 && y == 22) ||\n\t       (x == 12 && y == 10) || (x == 15 && y == 10);\n}\n","undoManager":{"mark":-50,"position":100,"stack":[[{"start":{"row":37,"column":0},"end":{"row":38,"column":0},"action":"remove","lines":["",""],"id":50}],[{"start":{"row":36,"column":0},"end":{"row":37,"column":0},"action":"remove","lines":["",""],"id":51}],[{"start":{"row":35,"column":0},"end":{"row":36,"column":0},"action":"remove","lines":["",""],"id":52}],[{"start":{"row":34,"column":0},"end":{"row":35,"column":0},"action":"remove","lines":["",""],"id":53}],[{"start":{"row":33,"column":0},"end":{"row":34,"column":0},"action":"remove","lines":["",""],"id":54}],[{"start":{"row":32,"column":0},"end":{"row":33,"column":0},"action":"remove","lines":["",""],"id":55}],[{"start":{"row":31,"column":0},"end":{"row":32,"column":0},"action":"remove","lines":["",""],"id":56}],[{"start":{"row":30,"column":0},"end":{"row":31,"column":0},"action":"remove","lines":["",""],"id":57}],[{"start":{"row":29,"column":0},"end":{"row":30,"column":0},"action":"remove","lines":["",""],"id":58}],[{"start":{"row":28,"column":0},"end":{"row":29,"column":0},"action":"remove","lines":["",""],"id":59}],[{"start":{"row":27,"column":0},"end":{"row":28,"column":0},"action":"remove","lines":["",""],"id":60}],[{"start":{"row":26,"column":0},"end":{"row":27,"column":0},"action":"remove","lines":["",""],"id":61}],[{"start":{"row":25,"column":0},"end":{"row":26,"column":0},"action":"remove","lines":["",""],"id":62}],[{"start":{"row":24,"column":0},"end":{"row":25,"column":0},"action":"remove","lines":["",""],"id":63}],[{"start":{"row":23,"column":0},"end":{"row":24,"column":0},"action":"remove","lines":["",""],"id":64}],[{"start":{"row":22,"column":0},"end":{"row":23,"column":0},"action":"remove","lines":["",""],"id":65}],[{"start":{"row":21,"column":0},"end":{"row":22,"column":0},"action":"remove","lines":["",""],"id":66}],[{"start":{"row":20,"column":0},"end":{"row":21,"column":0},"action":"remove","lines":["",""],"id":67}],[{"start":{"row":19,"column":0},"end":{"row":20,"column":0},"action":"remove","lines":["",""],"id":68}],[{"start":{"row":18,"column":0},"end":{"row":19,"column":0},"action":"remove","lines":["",""],"id":69}],[{"start":{"row":17,"column":0},"end":{"row":18,"column":0},"action":"remove","lines":["",""],"id":70}],[{"start":{"row":16,"column":0},"end":{"row":17,"column":0},"action":"remove","lines":["",""],"id":71}],[{"start":{"row":15,"column":0},"end":{"row":16,"column":0},"action":"remove","lines":["",""],"id":72}],[{"start":{"row":14,"column":0},"end":{"row":15,"column":0},"action":"remove","lines":["",""],"id":73}],[{"start":{"row":13,"column":0},"end":{"row":14,"column":0},"action":"remove","lines":["",""],"id":74}],[{"start":{"row":12,"column":0},"end":{"row":13,"column":0},"action":"remove","lines":["",""],"id":75}],[{"start":{"row":11,"column":0},"end":{"row":12,"column":0},"action":"remove","lines":["",""],"id":76}],[{"start":{"row":10,"column":0},"end":{"row":11,"column":0},"action":"remove","lines":["",""],"id":77}],[{"start":{"row":9,"column":0},"end":{"row":10,"column":0},"action":"remove","lines":["",""],"id":78}],[{"start":{"row":8,"column":0},"end":{"row":9,"column":0},"action":"remove","lines":["",""],"id":79}],[{"start":{"row":7,"column":0},"end":{"row":8,"column":0},"action":"remove","lines":["",""],"id":80}],[{"start":{"row":6,"column":0},"end":{"row":7,"column":0},"action":"remove","lines":["",""],"id":81}],[{"start":{"row":5,"column":0},"end":{"row":6,"column":0},"action":"remove","lines":["",""],"id":82}],[{"start":{"row":4,"column":0},"end":{"row":5,"column":0},"action":"remove","lines":["",""],"id":83}],[{"start":{"row":3,"column":0},"end":{"row":4,"column":0},"action":"remove","lines":["",""],"id":84}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"remove","lines":["",""],"id":85}],[{"start":{"row":1,"column":0},"end":{"row":2,"column":0},"action":"remove","lines":["",""],"id":86}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"remove","lines":["",""],"id":87}],[{"start":{"row":12,"column":0},"end":{"row":13,"column":0},"action":"insert","lines":["",""],"id":88}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":1},"action":"insert","lines":["/"],"id":89}],[{"start":{"row":13,"column":1},"end":{"row":13,"column":2},"action":"insert","lines":["/"],"id":90}],[{"start":{"row":13,"column":2},"end":{"row":13,"column":3},"action":"insert","lines":[" "],"id":91}],[{"start":{"row":13,"column":3},"end":{"row":13,"column":4},"action":"insert","lines":["바"],"id":95}],[{"start":{"row":13,"column":4},"end":{"row":13,"column":5},"action":"insert","lines":["꿔"],"id":99}],[{"start":{"row":13,"column":5},"end":{"row":13,"column":6},"action":"insert","lines":["야"],"id":100}],[{"start":{"row":13,"column":6},"end":{"row":13,"column":7},"action":"insert","lines":[" "],"id":101}],[{"start":{"row":13,"column":7},"end":{"row":13,"column":8},"action":"insert","lines":["할"],"id":104}],[{"start":{"row":13,"column":8},"end":{"row":13,"column":9},"action":"insert","lines":[" "],"id":105}],[{"start":{"row":13,"column":9},"end":{"row":13,"column":10},"action":"insert","lines":["부"],"id":109}],[{"start":{"row":13,"column":10},"end":{"row":13,"column":11},"action":"insert","lines":["분"],"id":111}],[{"start":{"row":13,"column":11},"end":{"row":13,"column":12},"action":"insert","lines":[" "],"id":112}],[{"start":{"row":13,"column":12},"end":{"row":13,"column":13},"action":"insert","lines":["2"],"id":113}],[{"start":{"row":16,"column":37},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":114},{"start":{"row":17,"column":0},"end":{"row":17,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"insert","lines":["ㅑ"],"id":115}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"remove","lines":["ㅑ"],"id":117}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"insert","lines":["9"],"id":118},{"start":{"row":17,"column":2},"end":{"row":17,"column":3},"action":"insert","lines":["i"]}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"insert","lines":["f"],"id":119}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"remove","lines":["f"],"id":120}],[{"start":{"row":17,"column":2},"end":{"row":17,"column":3},"action":"remove","lines":["i"],"id":121}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"remove","lines":["9"],"id":122}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"insert","lines":["i"],"id":123}],[{"start":{"row":17,"column":2},"end":{"row":17,"column":3},"action":"insert","lines":["f"],"id":124}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"insert","lines":[" "],"id":125}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":6},"action":"insert","lines":["()"],"id":126}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":6},"action":"remove","lines":["()"],"id":127}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"remove","lines":[" "],"id":128}],[{"start":{"row":17,"column":2},"end":{"row":17,"column":3},"action":"remove","lines":["f"],"id":129}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"remove","lines":["i"],"id":130}],[{"start":{"row":17,"column":0},"end":{"row":17,"column":42},"action":"insert","lines":["\telse if (x == 28 && y == 14) return true;"],"id":131}],[{"start":{"row":17,"column":43},"end":{"row":18,"column":0},"action":"insert","lines":["",""],"id":132},{"start":{"row":18,"column":0},"end":{"row":18,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":18,"column":1},"end":{"row":18,"column":43},"action":"insert","lines":["\telse if (x == 28 && y == 14) return true;"],"id":133}],[{"start":{"row":18,"column":1},"end":{"row":18,"column":2},"action":"remove","lines":["\t"],"id":134}],[{"start":{"row":17,"column":16},"end":{"row":17,"column":17},"action":"remove","lines":["8"],"id":135}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"remove","lines":["2"],"id":136}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"insert","lines":["-"],"id":137}],[{"start":{"row":17,"column":16},"end":{"row":17,"column":17},"action":"insert","lines":["1"],"id":138}],[{"start":{"row":18,"column":16},"end":{"row":18,"column":17},"action":"remove","lines":["8"],"id":139}],[{"start":{"row":18,"column":15},"end":{"row":18,"column":16},"action":"remove","lines":["2"],"id":140}],[{"start":{"row":18,"column":15},"end":{"row":18,"column":16},"action":"insert","lines":["-"],"id":141}],[{"start":{"row":18,"column":16},"end":{"row":18,"column":17},"action":"insert","lines":["1"],"id":142}],[{"start":{"row":17,"column":27},"end":{"row":17,"column":28},"action":"remove","lines":["4"],"id":143}],[{"start":{"row":17,"column":26},"end":{"row":17,"column":27},"action":"remove","lines":["1"],"id":144}],[{"start":{"row":17,"column":26},"end":{"row":17,"column":27},"action":"insert","lines":["3"],"id":145}],[{"start":{"row":18,"column":27},"end":{"row":18,"column":28},"action":"remove","lines":["4"],"id":146}],[{"start":{"row":18,"column":26},"end":{"row":18,"column":27},"action":"remove","lines":["1"],"id":147}],[{"start":{"row":18,"column":26},"end":{"row":18,"column":27},"action":"insert","lines":["2"],"id":148}],[{"start":{"row":18,"column":27},"end":{"row":18,"column":28},"action":"insert","lines":["8"],"id":149}],[{"start":{"row":18,"column":42},"end":{"row":19,"column":0},"action":"insert","lines":["",""],"id":150},{"start":{"row":19,"column":0},"end":{"row":19,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":19,"column":1},"end":{"row":19,"column":43},"action":"insert","lines":["\telse if (x == 28 && y == 14) return true;"],"id":151}],[{"start":{"row":19,"column":43},"end":{"row":20,"column":0},"action":"insert","lines":["",""],"id":152},{"start":{"row":20,"column":0},"end":{"row":20,"column":2},"action":"insert","lines":["\t\t"]}],[{"start":{"row":20,"column":2},"end":{"row":20,"column":44},"action":"insert","lines":["\telse if (x == 28 && y == 14) return true;"],"id":153}],[{"start":{"row":19,"column":0},"end":{"row":19,"column":1},"action":"remove","lines":["\t"],"id":154}],[{"start":{"row":20,"column":1},"end":{"row":20,"column":2},"action":"remove","lines":["\t"],"id":155}],[{"start":{"row":20,"column":0},"end":{"row":20,"column":1},"action":"remove","lines":["\t"],"id":156}],[{"start":{"row":19,"column":27},"end":{"row":19,"column":28},"action":"remove","lines":["4"],"id":157}],[{"start":{"row":19,"column":26},"end":{"row":19,"column":27},"action":"remove","lines":["1"],"id":158}],[{"start":{"row":19,"column":26},"end":{"row":19,"column":27},"action":"insert","lines":["3"],"id":159}],[{"start":{"row":20,"column":27},"end":{"row":20,"column":28},"action":"remove","lines":["4"],"id":160}],[{"start":{"row":20,"column":26},"end":{"row":20,"column":27},"action":"remove","lines":["1"],"id":161}],[{"start":{"row":20,"column":26},"end":{"row":20,"column":27},"action":"insert","lines":["2"],"id":162}],[{"start":{"row":20,"column":27},"end":{"row":20,"column":28},"action":"insert","lines":["8"],"id":163}]]},"ace":{"folds":[],"scrolltop":60,"scrollleft":0,"selection":{"start":{"row":19,"column":41},"end":{"row":19,"column":41},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1517552503384}