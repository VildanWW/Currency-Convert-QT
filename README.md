=================================================================

                   CURRENCY CONVERTER + CHART (Qt/C++)

=================================================================

### Key Features:
• Downloads exchange rates for 7 days (Central Bank of the Russian Federation, XML).  
• Parses data and saves the history in a vector `<date → {currency:rate}>`.  
• Converts selected currencies.  
• Plots two exchange rate charts.  

---

### System Loading:
• **DataManager** (QNetworkAccessManager)  
• `fetchData()` — sends a request  
• `onReplyFinished()` — parses XML  
• `dataReady()` — returns date + currency rates  

---

### MainWindow:
• Receives data, sorts, and saves.  
• Fills the ComboBox with currencies.  
• Calculates conversion: `value * (rateTo / rateFrom)`  
• `buildGraph()` — builds a QLineSeries for graphs.  

---

### Charts (QtCharts):
• **QLineSeries** — exchange rate points by date  
• **QChart** — graph container  
• **QDateTimeAxis** — time axis  
• **QValueAxis** — value axis  
• **QChartView** — renders graph inside `frame` and `frame_2`  

---

### Features:
• 7 asynchronous network downloads  
• Clears old charts before adding new ones  
• Fully dynamic, auto-updating graphs  
• Live update when currency selection changes  


                                                    The photographs show the first initial window
<img width="1918" height="1127" alt="111" src="https://github.com/user-attachments/assets/29aaaf47-f6c6-4f38-b7cd-e64009ad1f77" />

                                                  The photo shows the currency conversion and charts
<img width="1918" height="1118" alt="222" src="https://github.com/user-attachments/assets/390d05cb-ea90-4191-a549-e0dfba4a0a9a" />
