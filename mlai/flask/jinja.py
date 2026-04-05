from flask import Flask ,request,render_template,redirect,url_for

app = Flask(__name__)

@app.route("/form",methods=["GET","POST"])
def f1():
    if request.method=="POST":
        ml_score = float(request.form["ml"])
        dl_score = float(request.form["dl"])
        pack = {"ml":ml_score,"dl":dl_score}
        return redirect(url_for("f2",ml=ml_score, dl=dl_score))
    return render_template("form.html")

@app.route("/score")
def f2():
    ml = request.args.get("ml",type=float)
    dl = request.args.get("dl",type=float)
    return render_template("show_score.html",ml=ml,dl=dl)

if __name__ == "__main__":
    app.run(debug=True)