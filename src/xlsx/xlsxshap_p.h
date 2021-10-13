#ifndef QXLSX_SHAP_P_H
#define QXLSX_SHAP_P_H
#include "xlsxabstractooxmlfile.h"

class QXmlStreamWriter;
class QXmlStreamReader;
namespace QXlsx {

class Q_XLSX_EXPORT ShapPrivate : public AbstractOOXmlFile
{
    Q_DECLARE_PUBLIC(Shap)
public:
    ShapPrivate();
    ~ShapPrivate();
}

}

#endif