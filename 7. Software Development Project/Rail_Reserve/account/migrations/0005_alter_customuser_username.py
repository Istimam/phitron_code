# Generated by Django 5.0.6 on 2024-07-17 02:52

from django.db import migrations, models

class Migration(migrations.Migration):

    dependencies = [
        ('account', '0004_alter_customuser_username'),  # Adjust this to the last applied migration
    ]

    operations = [
        migrations.AlterField(
            model_name='customuser',
            name='username',
            field=models.CharField(max_length=30, default='default_username'),
        ),
    ]
