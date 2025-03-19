#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QTextEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QTextDocument>
#include <QMimeData>
#include <QFileInfo>
#include <QDropEvent>
#include <QDragEnterEvent>
#include <QImage>
#include <QDebug>

class ImageWidget : public QLabel {
    Q_OBJECT
public:
    explicit ImageWidget(QWidget *parent = nullptr) : QLabel(parent) {
        setAlignment(Qt::AlignCenter);  // 使图片居中
        setFixedSize(200, 200);         // 设置固定大小
    }

    void setImage(const QString &path) {
        QImage image(path);
        if (image.isNull()) {
            qDebug() << "Image loading failed:" << path;
            setText("Failed to load image");
        } else {
            setPixmap(QPixmap::fromImage(image));
        }
    }
};


#endif // IMAGEWIDGET_H
