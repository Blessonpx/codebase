### Setup New Environment 
### In order to refer the General Heirarchy files https://www.pathname.com/fhs/pub/fhs-2.3.html
python -m venv myenv
### Install Version
pip install django==2.0.7
### List of Packeages initally installed
appdirs==1.4.4
asgiref==3.2.10
distlib==0.3.1
Django==3.1
filelock==3.0.12
mysqlclient==1.4.6
psycopg2==2.8.5
pytz==2020.1
six==1.15.0
sqlparse==0.3.1
virtualenv==20.0.30
### Find WHere Python Installed 
which python3
### Create Project Django
### Refer https://aws.amazon.com/getting-started/hands-on/deploy-python-application/
django-admin startproject <Name> .
### Run Server to Access http:/ ip
python manage.py runserver
