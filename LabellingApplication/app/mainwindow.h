#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QLabel>
#include <QScrollArea>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief
 *
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructor for the MainWindow class
     *
     * @param parent
     */
    MainWindow(QWidget *parent = nullptr);
    /**
     * @brief Destructor for the MainWindow class
     *
     */
    ~MainWindow();


private slots:

    /**
     * @brief Load File explorer upon clicking button, Once user selects appropriate file the file is read line by line and loaded into listboxWidget.
     * If user does not select or selects the wrong file a dialog will inform the user of the error.
     *
     *
     */
    void on_classLoad_clicked();

    /**
     * @brief Open the class file user selected to load class names. Check if opened correctly else break. Get total of items
     *in listbox and loop till this total using iterator and add each line into the class file, Output save dialog and close file.
     *
     */
    void on_classSave_clicked();

    /**
     * @brief User inputs a word into the lineEdit and aslong as not blank the Add button becomes available the new class name is appeneded to bottom of the listview.
     *
     */
    void on_classAdd_clicked();

    /**
     * @brief From user selected row in the listview delete specific class name. This can be done at any time changes will not save in the class file unless save file is chosen.
     *
     */
    void on_classRemove_clicked();

    /**
     * @brief When user has completed entering string triggered by pressing enter or clicking to an external component activate the
     * aslong as the string entered is not blank.
     */
    void on_classEnter_editingFinished();

    /**
     * @brief load class into an QStringList using an iterating loop with a maximum from items run bubble sort function and order the items in alphabetical order.
     * output a list and update the listview with the sorted values.
     */
    void on_classAsc_clicked();

    /**
     * @brief open file explorer for the user to allow them to select multiple images to load into the list widget. Image names are stored in a linked list.
     * Iterates through list to display image names. Will display error if user tries to load an image more than once.
     *
     */
    void on_loadImagesButton_clicked();

    /**
     * @brief On double click of the image name in the list widget, the image will be displayed. Uses current row as index.
     * Scales image to fit the window with smooth transformation function.
     */
    void on_imageList_itemDoubleClicked();

    /**
     * @brief Will sort images by date downloaded.
     *
     */
    void on_dateSortButton_clicked();
    
    /**
    * @brief Will sort images alphabetically.
    *
    */

    void on_nameSortButton_clicked();

private:
    
    /**
    * @brief Initialises UI.
    *
    */
    Ui::MainWindow *ui; 
};
#endif // MAINWINDOW_H
