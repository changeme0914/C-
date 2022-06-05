
// SDL_pointView.h : CSDL_pointView ��Ľӿ�
//

#pragma once


class CSDL_pointView : public CView
{
protected: // �������л�����
	CSDL_pointView();
	DECLARE_DYNCREATE(CSDL_pointView)

// ����
public:
	CSDL_pointDoc* GetDocument() const;

// ����
public:
	COLORREF m_nColor;
	COLORREF m_fColor;
	CPoint cpoint;
	CPoint opoint;
	BOOL m_Down;
	int w;
	int shape;
	int style;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CSDL_pointView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Online();
	afx_msg void Onjuxing();
	afx_msg void Ontuoyuan();
	afx_msg void Onzhixian();
	afx_msg void Onxuxian();
	afx_msg void Onone();
	afx_msg void Ontwo();
	afx_msg void Onthree();
	afx_msg void Onhbcolor();
	afx_msg void Ontccolor();
	
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);

	afx_msg void OnPaint();
	afx_msg void onpen();
};

#ifndef _DEBUG  // SDL_pointView.cpp �еĵ��԰汾
inline CSDL_pointDoc* CSDL_pointView::GetDocument() const
   { return reinterpret_cast<CSDL_pointDoc*>(m_pDocument); }
#endif

