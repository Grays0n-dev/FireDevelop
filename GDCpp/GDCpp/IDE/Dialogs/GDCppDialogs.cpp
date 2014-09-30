//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: GDCppDialogs.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "GDCppDialogs.h"


// Declare the bitmap loading function
extern void wxCCA21InitBitmapResources();

static bool bBitmapLoaded = false;


DebuggerGUIBase::DebuggerGUIBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCCA21InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    m_auimgr = new wxAuiManager;
    m_auimgr->SetManagedWindow( this );
    m_auimgr->SetFlags( wxAUI_MGR_LIVE_RESIZE|wxAUI_MGR_TRANSPARENT_HINT|wxAUI_MGR_TRANSPARENT_DRAG|wxAUI_MGR_ALLOW_ACTIVE_PANE|wxAUI_MGR_ALLOW_FLOATING);
    m_auimgr->GetArtProvider()->SetMetric(wxAUI_DOCKART_GRADIENT_TYPE, wxAUI_GRADIENT_NONE);
    
    m_toolbar = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_PLAIN_BACKGROUND|wxAUI_TB_DEFAULT_STYLE);
    m_toolbar->SetToolBitmapSize(wxSize(16,16));
    
    m_auimgr->AddPane(m_toolbar, wxAuiPaneInfo().Direction(wxAUI_DOCK_TOP).Layer(0).Row(0).Position(0).Fixed().CaptionVisible(true).MaximizeButton(false).CloseButton(false).MinimizeButton(false).PinButton(false).ToolbarPane());
    
    m_toolbar->AddTool(ID_PLAY_TOOL, _("Play the scene"), wxXmlResource::Get()->LoadBitmap(wxT("starticon")), wxNullBitmap, wxITEM_NORMAL, _("Play the current scene"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_PAUSE_TOOL, _("Pause the scene"), wxXmlResource::Get()->LoadBitmap(wxT("pauseicon")), wxNullBitmap, wxITEM_NORMAL, _("Pause the scene being played"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_STEP_TOOL, _("Render only one frame of the scene"), wxXmlResource::Get()->LoadBitmap(wxT("stepicon")), wxNullBitmap, wxITEM_NORMAL, _("Render only one frame of the scene"), wxT(""), NULL);
    
    m_toolbar->AddSeparator();
    
    m_toolbar->AddTool(ID_ADD_OBJECT_TOOL, _("Create a new object"), wxXmlResource::Get()->LoadBitmap(wxT("addobjet")), wxNullBitmap, wxITEM_NORMAL, _("Create a new object"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_ADD_VAR_TOOL, _("Add a scene variable"), wxXmlResource::Get()->LoadBitmap(wxT("addvaricon")), wxNullBitmap, wxITEM_NORMAL, _("Add a scene variable"), wxT(""), NULL);
    
    m_toolbar->AddTool(ID_ADD_VARG_TOOL, _("Create a new global variable"), wxXmlResource::Get()->LoadBitmap(wxT("addvargicon")), wxNullBitmap, wxITEM_NORMAL, _("Create a new global variable"), wxT(""), NULL);
    m_toolbar->Realize();
    
    m_notebook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    wxImageList* m_notebook_il = new wxImageList(16, 16);
    m_notebook->AssignImageList(m_notebook_il);
    
    m_auimgr->AddPane(m_notebook, wxAuiPaneInfo().Direction(wxAUI_DOCK_CENTER).Layer(0).Row(0).Position(0).BestSize(100,100).MinSize(100,100).MaxSize(100,100).CaptionVisible(false).MaximizeButton(false).CloseButton(false).MinimizeButton(false).PinButton(false));
    m_auimgr->Update();
    
    m_panel31 = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    int m_panel31ImgIndex;
    m_panel31ImgIndex = m_notebook_il->Add(wxXmlResource::Get()->LoadBitmap(wxT("debuggericon")));
    m_notebook->AddPage(m_panel31, _("General"), false, m_panel31ImgIndex);
    
    wxFlexGridSizer* flexGridSizer35 = new wxFlexGridSizer(1, 1, 0, 0);
    flexGridSizer35->SetFlexibleDirection( wxBOTH );
    flexGridSizer35->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer35->AddGrowableCol(0);
    flexGridSizer35->AddGrowableRow(0);
    m_panel31->SetSizer(flexGridSizer35);
    
    m_generalList = new wxListCtrl(m_panel31, ID_GENERAL_LIST_CTRL, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
    flexGridSizer35->Add(m_generalList, 0, wxALL|wxEXPAND, 0);
    m_generalList->SetMinSize(wxSize(200,100));
    
    m_panel33 = new wxPanel(m_notebook, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    int m_panel33ImgIndex;
    m_panel33ImgIndex = m_notebook_il->Add(wxXmlResource::Get()->LoadBitmap(wxT("objet")));
    m_notebook->AddPage(m_panel33, _("Objects"), false, m_panel33ImgIndex);
    
    wxFlexGridSizer* flexGridSizer39 = new wxFlexGridSizer(1, 2, 0, 0);
    flexGridSizer39->SetFlexibleDirection( wxBOTH );
    flexGridSizer39->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer39->AddGrowableCol(1);
    flexGridSizer39->AddGrowableRow(0);
    m_panel33->SetSizer(flexGridSizer39);
    
    m_objectsTree = new wxTreeCtrl(m_panel33, ID_OBJECTS_TREE_CTRL);
    flexGridSizer39->Add(m_objectsTree, 0, wxALL|wxEXPAND, 0);
    m_objectsTree->SetMinSize(wxSize(150,100));
    
    wxFlexGridSizer* flexGridSizer41 = new wxFlexGridSizer(2, 1, 0, 0);
    flexGridSizer41->SetFlexibleDirection( wxBOTH );
    flexGridSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer41->AddGrowableCol(0);
    flexGridSizer41->AddGrowableRow(1);
    
    flexGridSizer39->Add(flexGridSizer41, 1, wxALL|wxEXPAND, 0);
    
    wxFlexGridSizer* flexGridSizer43 = new wxFlexGridSizer(1, 3, 0, 0);
    flexGridSizer43->SetFlexibleDirection( wxBOTH );
    flexGridSizer43->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer43->AddGrowableCol(1);
    flexGridSizer43->AddGrowableRow(0);
    
    flexGridSizer41->Add(flexGridSizer43, 1, wxALL|wxEXPAND, 0);
    
    m_staticText45 = new wxStaticText(m_panel33, wxID_ANY, _("Object :"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_objectName = new wxStaticText(m_panel33, wxID_ANY, _("aaa"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer43->Add(m_objectName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_deleteBt = new wxBitmapButton(m_panel33, ID_DELETE_BT, wxXmlResource::Get()->LoadBitmap(wxT("deleteicon")), wxDefaultPosition, wxSize(-1,-1), wxBU_AUTODRAW);
    m_deleteBt->SetToolTip(_("Delete the selected object"));
    
    flexGridSizer43->Add(m_deleteBt, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_objectList = new wxListCtrl(m_panel33, ID_OBJECT_LIST, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
    flexGridSizer41->Add(m_objectList, 0, wxALL|wxEXPAND, 0);
    m_objectList->SetMinSize(wxSize(150,100));
    
    SetSizeHints(500,300);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
}

DebuggerGUIBase::~DebuggerGUIBase()
{
    m_auimgr->UnInit();
    delete m_auimgr;

}
