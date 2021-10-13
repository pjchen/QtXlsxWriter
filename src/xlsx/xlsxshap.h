#ifndef XLSX_SHAP_H
#define XLSX_SHAP_H

#include "xlsxabstractooxmlfile.h"

#include <QSharedPointer>

class QXmlStreamReader;
class QXmlStreamWriter;

QT_BEGIN_NAMESPACE_XLSX
class AbstractSheet;
class Worksheet;
class ChartPrivate;
class CellRange;
class DrawingAnchor;

class Q_XLSX_EXPORT Shap : public AbstractOOXmlFile
{
    Q_DECLARE_PRIVATE(Shap)
public:
    ~Shap() Shap(AbstractSheet *parent);

private:
    friend class AbstractSheet;
    friend class Worksheet;
    friend class Chartsheet;
    friend class DrawingAnchor;
};
QT_END_NAMESPACE_XLSX

#endif