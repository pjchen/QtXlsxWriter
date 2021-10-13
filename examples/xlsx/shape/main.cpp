#include <QtGui>
#include "xlsxdocument.h"

int main(int argc, char **argv){
  QXlsx::Document xlsx("pi.xlsx");  
  xlsx.saveAs("pi_save.xlsx");
}