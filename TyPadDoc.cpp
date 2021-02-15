// TyPadDoc.cpp : implementation of the CTyPadDoc class
//

#include "stdafx.h"
#include "TyPad.h"

#include "TyPadDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTyPadDoc

IMPLEMENT_DYNCREATE(CTyPadDoc, CDocument)

BEGIN_MESSAGE_MAP(CTyPadDoc, CDocument)
	//{{AFX_MSG_MAP(CTyPadDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTyPadDoc construction/destruction

CTyPadDoc::CTyPadDoc()
{
	// TODO: add one-time construction code here

}

CTyPadDoc::~CTyPadDoc()
{
}

BOOL CTyPadDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTyPadDoc serialization

void CTyPadDoc::Serialize(CArchive& ar)
{
	// CEditView contains an edit control which handles all serialization
	((CEditView*)m_viewList.GetHead())->SerializeRaw(ar);
}

/////////////////////////////////////////////////////////////////////////////
// CTyPadDoc diagnostics

#ifdef _DEBUG
void CTyPadDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTyPadDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTyPadDoc commands
